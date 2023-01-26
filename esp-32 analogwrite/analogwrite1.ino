#include <analogWrite.h>
int iot=12;

void setup() {
  pinMode(iot,OUTPUT);
  
}

void loop() {
  for(int i=225;i>0;i--){
  analogWrite(iot, i); //0-255
  delay(10);
  }
  

}
