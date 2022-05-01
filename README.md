 <h1>Bluetooth Light Switch</h1>
 <img src="Clock.jpeg" width=500 highet=500>
 <p>Did you ever lay in bed and wanted to turn off the light but you didn't want to stand up and go. Here is the solution for you.

 In this project we will make bluetooth light switch.
 <br>
 <br>
 <h1>Components</h1>
 <ul>
 <li><a href="https://www.newark.com/arduino/a000005/dev-board-atmega328-arduino-nano/dp/13T9275?COM=ref_hackster">Arduino NANO</a></li>
 <li><a href="https://www.newark.com/apem/mjtp1230/switch-tactile-spst-50ma-through/dp/19C7994?COM=ref_hackster">Tactile Switch</a></li>
 <li><a href="https://www.amazon.com/HiLetgo-Wireless-Bluetooth-Transceiver-Arduino/dp/B071YJG8DR">Hc-05 Bluetooh Moudle</a></li>
 <li><a href="">Relay Moudle</a></li>
 <li><a href="https://www.newark.com/stellar-labs/24-14687/kit-contents-eight-25-ft-spools/dp/44AC9034?COM=ref_hackster">Wires</a></li>
  </ul>
 <h1>Wiring</h1>
 
 <img src="schematics/schematics.png" width=400 highet=400/>
  
  <p>In each wall switch you will find two wires, once the two wires are connected the power will be sent to the light for it to turn on. We will connect  the wires using a relay which is an automated switch. If the relay will get power the two wires will be connected, and if it will be off the two wires will not be connected.</p>
  
<h1>Usage</h1>
<p>We will turn on the relay using two ways:

1. Using a button

2. Using Bluetooth</p>
<h1>Power:</h1>
<p>To power the entire circuit I cut a USB and took - and + wires and connected it and then after connected the USB to any USB 5v charger.</p>
<h1>Bluetooth:</h1>
<p>For this project I made my own Bluetooth app. If you would like to use any other app you will need to know that, to turn on the commend is "1#", and to turn off "0#".</p> 
<h1>Connecting To The Wall</h1>
<p>Before you will put every thing in the wall you will need to do 2 things. First solder every wire to each other to avoid big size(so it can go in the wall). After you soldered everything to the Arduino nano take out the existing switch from the wall and connect the two wires to the middle plug and the NO plug in the relay. After everything is connected stick everything inside the wall (i used tape to cover everything up).</p>
<h1>Warning</h1>
<p><b>Working with high power is very dangers and you will need to be careful. Make sure you turn off the fuse first before doing everything</b></p>
<h1>More Info</h1>
<p>Contact me or more info at Arduino Project Hub:https://create.arduino.cc/projecthub/dzh121/light-switch-bluetooth-3e330b</p>
