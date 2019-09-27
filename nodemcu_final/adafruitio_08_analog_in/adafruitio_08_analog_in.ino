#include "config.h"

// photocell state
int current = 0;
int last = -1;

// set up the 'analog' feed
AdafruitIO_Feed *analog = io.feed("vincoun");

void setup() {

  // start the serial connection
  Serial.begin(115200);

  while (!Serial) {
    
  }

  // connect to io.adafruit.com
  io.connect();

  // wait for a connection
  while(io.status() < AIO_CONNECTED) {
    delay(500);
  }

  // we are connected

}

void loop() {

  // io.run(); is required for all sketches.
  // it should always be present at the top of your loop
  // function. it keeps the client connected to
  // io.adafruit.com, and processes any incoming data.
  
  // grab the current state of the photocell
current = Serial.parseInt();
  // return if the value hasn't changed
  if(current!=0){

io.run();
  
  if(current == last)
    return;

  // save the current state to the analog feed
  analog->save(current);
  Serial.print(current);

  // store last photocell state
  last = current;

  // wait three seconds (1000 milliseconds == 1 second)
  //
  // because there are no active subscriptions, we can use delay()
  // instead of tracking millis()
  delay(500);
}
}
