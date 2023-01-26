//#include <analogWrite.h>;
#include <pwmWrite.h>
Pwm pwm = Pwm();
int iot = 12;

void setup() {
 pinMode(iot,OUTPUT);

}

void loop() {
  
pwm.write(12, 50);

}
