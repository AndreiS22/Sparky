#include "hardware_init.h"
#include "motors.h"
#include "turbina.h"
#include "citire_snz.h"
#include "line_black.h"



void setup() {
  
  
 hardwareInit();
   wait_for_start();
     digitalWrite(13,HIGH);
     changeThrottle(force);
   delay(5000);
 // set_motors(100,-100);
}




void loop()
{
    digitalWrite(13,LOW);
    follow();
    wait_for_stop();
 //citire_senzori();
}







