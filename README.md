> #### [Link](https://io.adafruit.com/sidsal/feeds/vincoun) to live count of people in [Tinkerers' Lab IITB](https://www.google.com/maps/place/Tinkerers'+Laboratory/@19.1337854,72.9167784,15z/data=!4m5!3m4!1s0x0:0xd9d02f29b4617fb4!8m2!3d19.1337854!4d72.9167784)


# <b>ARDUINO CONTROLLED VISITOR COUNTER USING ULTRASONIC SENSOR  (ACVC) </b>                                                      
 
 

#### ELECTRICAL COMPONENTS USED:
*	Ultrasonic sensor HC- SR04 (x2)
*	Arduino Uno R3
*	16X2 LCD Display JHD 162A
*	NodeMCU (Only used to upload the count on internet)
*	DC Adapter for power supply



### Circuit Diagrams:
1. Ultrasonic:- ![Image of Ultrasonic Cirduit](https://github.com/siddheshpradeepsali/images/blob/master/ultrasonic_diagram.png)
1. LCD Display:- ![Image of LCD Cirduit](https://github.com/siddheshpradeepsali/images/blob/master/lcd_diagram.png)



### Circuit Connections Chart:
Ultrasonic Sensors:-

Ports on Ultrasonic Sensors | Ports on Arduino Uno
------------ | -------------
trig 1 | 9
echo 1 | 8
trig 2 | 12
echo 2 | 10


LCD Display:-

Ports on LCD Display | Ports on Arduino Uno
------------ | -------------
D7 | 4
D6 | 5
D5 | 6
D4 | 7
led+ | +5 through 10k resistor
led- | gnd
vcc | +5
gnd | gnd
en | 11
rw | gnd
rs | 13


### Instructions:

1. Connect the circuit as shown in the diagram.
1. Upload codes form ['final code'](https://github.com/siddheshpradeepsali/DoorCounter/tree/master/Final%20Code) folder to [Arduino Uno](https://github.com/siddheshpradeepsali/DoorCounter/blob/master/Final%20Code/arduino_final/arduino_final.ino) and [NodeMCU](https://github.com/siddheshpradeepsali/DoorCounter/tree/master/Final%20Code/nodemcu_final/).
1. In case of NodeMCU you can choose whether to save readings to [Google Script](https://github.com/siddheshpradeepsali/DoorCounter/tree/master/Final%20Code/nodemcu_final/Google%20Script%20Upload/) or [Adafruit.io](https://github.com/siddheshpradeepsali/DoorCounter/tree/master/Final%20Code/nodemcu_final/Adafruit%20IO%20Upload/)
   1. [here](http://lethanhtrieu.likesyou.org/2017/11/07/how-to-send-data-from-esp8266-to-google-drive/?i=2) is the link for tutorial to make & configure google sheets.
   1. For Adafruit.io visit [here](https://io.adafruit.com/) and make free account and just paste your username and AIO key (**NOT PASSWORD**) in the code. [[NodeMCU to Adafruit.io Tutorial](https://www.youtube.com/watch?v=Eocgx_VVGVY)]
   

###### PS.:- Please read [Project Document](https://github.com/siddheshpradeepsali/DoorCounter/blob/master/For%20Tinkerers'%20Lab%20(IITB)/August%20DIY%20Project.docx) file if you want to know more about this project. :grinning:

> **©The Wolf Pack**
