### Features

- Easy Home Automation 
- Clever and cheap concept
- Easy programming with Blynk

# Water Level Indicator
### A simple NodeMCU Ultrasonic Water Level Indicator

1. Parts
2. Construction
3. Programming
4. App creation
5. 3D Casing

##### Parts
- NodeMCU V3
- HC-SR04
- Simple Switch
- Old Laptop battery pack or other Power source

##### Construction
In this Projekt we use the NodeMCU V3 because the cheap price and performance.
**You can use a smaller chips too, but i only had some NodeMCUs !**

I made this simple Sketch with Fritzing:

![Breadboard](https://github.com/Gamer08YT/Water-Level-Indicator/blob/master/Wasserstand_Steckplatine.png "Breadboard")

For the Power i used some old Laptop battery pack, which works perfekt for me.
For Powersaving you can set the NodeMCU in sleep mode!

##### Programming
- Install Driver ([Download](https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers "Download"))
- Install Arduino IDE ([Download](https://www.arduino.cc/en/main/software "Download"))
- Add Board in Arduino Board Manager : https://arduino.esp8266.com/stable/package_esp8266com_index.json
- Select NodeMCU 0.9 as Board
- Upload Sketch

##### App creation 
- Go to your App Store / Play Store and download Blynk
- Create a new Projekt
- Select ESP8266 as Board
- Enter the Auth Token in the Arduino Sketch
- Add a Gauge or something else and select V5 as pin. 

##### 3D Casing
Comming soon ... (5-12 days)
