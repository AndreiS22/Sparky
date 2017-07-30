#include "hardware_init.h"
#include "motors.h"
#include "turbina.h"
#include "citire_snz.h"
#include "line_black.h"



void setup() {
  
  
 hardwareInit();
  // wait_for_start();
   //  changeThrottle(force);
   delay(1000);
}




void loop()
{
    
    //follow();
    Serial.println(digitalRead(7));
   // wait_for_stop();
 /*citire_senzori();
 delay(15);*/
}







