> ##### [Link](https://io.adafruit.com/sidsal/feeds/vincoun) to live count of people in [Tinkerers' Lab IITB](https://www.google.com/maps/place/Tinkerers'+Laboratory/@19.1337854,72.9167784,15z/data=!4m5!3m4!1s0x0:0xd9d02f29b4617fb4!8m2!3d19.1337854!4d72.9167784)
> ##### [Link](https://www.youtube.com/playlist?list=PLCQrOwJ-Oj-2hbB4bVTjEAeX2ZR0tgUfT) to Demonstration Video.

# <b>ARDUINO CONTROLLED VISITOR COUNTER USING ULTRASONIC SENSOR  (ACVC) </b>                                                      
 
-A device to count number of people entering and leaving a room and upload the count to internet.

#### ELECTRICAL COMPONENTS USED:

<img src="https://github.com/siddheshpradeepsali/images/blob/master/hcsr04.png" width="128" height="70">     <img src="https://github.com/siddheshpradeepsali/images/blob/master/arduino.png" width="163" height="110">       <img src="https://github.com/siddheshpradeepsali/images/blob/master/lcd.png" width="177" height="80">     <img src="https://github.com/siddheshpradeepsali/images/blob/master/nodemcu.png" width="200" height="110">

*	Ultrasonic sensor HC- SR04 (x2)
*	Arduino Uno R3
*	16X2 LCD Display JHD 162A
*	NodeMCU (Only used to upload the count on internet)
*	DC Adapter for power supply



### Circuit Diagrams:
1. Ultrasonic:- ![Image of Ultrasonic Circuit](https://github.com/siddheshpradeepsali/images/blob/master/ultrasonic_diagram.png)
[TinkerCAD Link](https://www.tinkercad.com/things/1HRTabNvi2n) for Ultrasonic Sensors Circuit.
1. LCD Display:- ![Image of LCD Circuit](https://github.com/siddheshpradeepsali/images/blob/master/lcd_diagram.png) 
[TinkerCAD Link](https://www.tinkercad.com/things/4IARz3SSZ0P) for LCD Display Circuit.
1. NodeMcu:- 
<img src="https://github.com/siddheshpradeepsali/images/blob/master/nodemcu__arduino.png" alt="Image of nodemcu circuit" width="357" height="500">


### 3D Printed Case for enclosing the circuit:
![image for 3d modell](https://csg.tinkercad.com/things/bOXppBe96oz/t725.png?rev=1570002339584000000&s=3e17e20e551a8fb73b1fafc441143d2f&v=1)

[Here](https://www.tinkercad.com/things/bOXppBe96oz) is the link to 3D tinkercad model for 3D printer.

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
gnd/vss | gnd
vcc | +5v
VEE | Potentiometer
rs | 13
r/w | gnd
en | 11
D4 | 7
D5 | 6
D6 | 5
D7 | 4
led+ | +5v through 10k resistor
led- | gnd

NodeMCU:-

Ports on NodeMCU | Ports on Arduino Uno
------------ | -------------
rx | 3
tx | 2
Vin | +5v
gnd | gnd


### Instructions:

1. Connect the circuit as shown in the diagram.
1. Upload codes form ['final code'](https://github.com/siddheshpradeepsali/DoorCounter/tree/master/Final%20Code) folder to [Arduino Uno](https://github.com/siddheshpradeepsali/DoorCounter/blob/master/Final%20Code/arduino_final/arduino_final.ino) and [NodeMCU](https://github.com/siddheshpradeepsali/DoorCounter/tree/master/Final%20Code/nodemcu_final/).
1. In case of NodeMCU you can choose whether to save readings to [Google Script](https://github.com/siddheshpradeepsali/DoorCounter/tree/master/Final%20Code/nodemcu_final/Google%20Script%20Upload/) or [Adafruit.io](https://github.com/siddheshpradeepsali/DoorCounter/tree/master/Final%20Code/nodemcu_final/Adafruit%20IO%20Upload/)
   1. [here](http://lethanhtrieu.likesyou.org/2017/11/07/how-to-send-data-from-esp8266-to-google-drive/?i=2) is the link for tutorial to make & configure google sheets.
   1. For Adafruit.io visit [here](https://io.adafruit.com/) and make free account and just paste your username and AIO key (**NOT PASSWORD**) in the code. [[NodeMCU to Adafruit.io Tutorial](https://www.youtube.com/watch?v=Eocgx_VVGVY)]
   

###### PS.:- Please read [Project Document](https://github.com/siddheshpradeepsali/DoorCounter/blob/master/For%20Tinkerers'%20Lab%20(IITB)/August%20DIY%20Project.docx) file if you want to know more about this project. :grinning:

> **©The Wolf Pack**  
       <img src="https://github.com/siddheshpradeepsali/images/blob/master/logo1.png">
    
------------------------------------------------------------------------------------------------------------------------------------
   <img src="https://github.com/siddheshpradeepsali/images/blob/master/QR_code_Live_count.png" alt="QR Code For live count of people inside TL" width="154" height="200">          <img src="https://github.com/siddheshpradeepsali/images/blob/master/QR_Code_Github_link.png" alt="QR Code For Github Repo for this project" width="154" height="200">
