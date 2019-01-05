https://github.com/MiczFlor/RPi-Jukebox-RFID/wiki/img/GPIO-pin-numbering.png


How to connect the buttons
Here is how to connect the buttons:
Volume Down GPIO19 (PIN35) and GND (PIN39)
Volume Up GPIO16 (PIN36) and GND (PIN34)
Play/Pause/Halt (or how you call it) GPIO21 (PIN40) and GND (PIN25)
Next GPIO26 (PIN37) and GND (PIN30)
Previous GPIO20 (PIN38) and GND (PIN20)
Shutdown (you need to hold button for 2 secs for shutdown) GPIO3 (PIN5) and GND (PIN6)
!!! IMPORTANT Only when using the above listed pins for wiring your shutdown pin you will be able to power-up the Raspberry PI from firmware halt. !!!
Circuit example(s) for the button wiring
You will be using push buttons, which are essentially the same as arcade buttons, meaning: when you press them down, they are ON, when you let go, the are OFF. So skipping a track is tapping a button once, changing the volume, each tap changes it a bit. The updated GPIO from pullrequest #306 added the option to hold down the volume buttons and change every 0.3 seconds the volume according to the configured volume steps.

