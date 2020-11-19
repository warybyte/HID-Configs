# HID-Configs
This all started as some code I cobbled together for configuring datacenter appliances using a DigiSpark USB dongle.
- Validated on SuperMicro 6027-CDNRT+ appliance
- CentOS based virtual servers

Should work on any Linux based OS with a recent version of 'nmtui'.

The only digikeyboard.h header file I could to work was one I found outside the DigiStump repo. I've looked all over Git to find the original author, but here is the link

https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&ved=2ahUKEwjkh5yElLnqAhWxhHIEHRwtDD0QFjAAegQIAhAB&url=https%3A%2F%2Fcdn.hackaday.io%2Ffiles%2F10446446921664%2FDigiKeyboard_6keys.h&usg=AOvVaw1YpodNPtyo3YRpI5R5i_r4

I'm adding the code as well for reference.

UPDATE: November 19, 2020
- I've renamed the repo to HID-Configs since I've expanded to Malduino
- I've added the Ducky scripts I use in Malduino. It works, though you might have to tweak the delays
