#include <DigiKeyboard.h>

void setup() {
  // put your setup code here, to run once:
}

void loop() {
    DigiKeyboard.delay(5000);
    DigiKeyboard.sendKeyStroke(0);
    ///////////////////////////////////////////
    // CONFIGURE HOSTNAME VIA NMTUI (VALIDATED)
    ///////////////////////////////////////////
    DigiKeyboard.print("APPLIANCE USER");       // Enter the default username of your appliance here
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("APPLIANCE PASSWORD");   // Enter the default password of your appliance here
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(2000);
    DigiKeyboard.print("nmtui");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_HOME);       // Send to front of existing name field
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_DELETE);     //Delete existing name with however many deletes are neede
    DigiKeyboard.sendKeyStroke(KEY_DELETE);
    DigiKeyboard.sendKeyStroke(KEY_DELETE);
    DigiKeyboard.sendKeyStroke(KEY_DELETE);
    DigiKeyboard.sendKeyStroke(KEY_DELETE);
    DigiKeyboard.sendKeyStroke(KEY_DELETE);
    DigiKeyboard.sendKeyStroke(KEY_DELETE);
    DigiKeyboard.print("ENTER_HOSTNAME");       // Place your hostname here...
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //cancel...stop here for testing
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //ok...stop here for production
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);      //ok
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);      //confirm
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_TAB);        //Quit
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);      //OK
    DigiKeyboard.delay(2000);
    ///////////////////////////////////////////
    // CONFIGURE IP
    ///////////////////////////////////////////
    //DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,MOD_ALT_LEFT,KEY_T);
    DigiKeyboard.print("nmtui");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);      //nmtui menu
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);      //select interfaces
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);      //select first int
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); 
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); 
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //<automatic> 
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //set to manual
    DigiKeyboard.sendKeyStroke(KEY_ENTER); 
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT); //<show>
    DigiKeyboard.sendKeyStroke(KEY_ENTER); 
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //<Add...>
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500); 
    DigiKeyboard.print("192.168.0.10/24");      // GENERIC INTERNAL IP...change to whatever you need
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //<Remove>
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //<Add...>
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //<Gateway>
    DigiKeyboard.print("192.168.0.1");          // GENERIC INTERNAL GATEWAY...change to whatever you need
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //add dns1
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("8.8.8.8");              // GOOGLE DNS1...change to whatever you need
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //add dns2
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("8.8.4.4");              // GOOGLE DNS2...change to whatever you need
    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //cancel...stop here for testing
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //ok...stop here for production
    DigiKeyboard.delay(2000);
    // EXIT IP SETTINGS
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.sendKeyStroke(KEY_TAB); //Quit
    DigiKeyboard.delay(1000);
    // EXIT INTERFACE MENU
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //Back
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
    // EXIT NMTUI MENU
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //Quit
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(2000);
    //
    // UNCOMMENT ONE OF THE FOLLOWING TO AUTO-RESTART SERVICES DEPENDING ON YOU OS...
    //
    // RESTART DEBIAN NETWORK
    // DigiKeyboard.print("service networking restart");
    // DigiKeyboard.delay(2000);
    //
    // RESTART RHEL NETWORK  
    // DigiKeyboard.print("service network restart");
    // DigiKeyboard.delay(2000);
    //
    ////////////////////////////////////
    // VALIDATE YOUR CHANGES
    ////////////////////////////////////
    DigiKeyboard.print("uname -a");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("ip address");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);

    // Light loop to show when work is done...nmtu
    while (true)
    {
        // lights when live
        digitalWrite(0, HIGH); 
        delay(300);
        digitalWrite(0, LOW);
        delay(300);
    }
}
