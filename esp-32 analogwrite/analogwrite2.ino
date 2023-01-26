#include <analogWrite.h>
int LDR=36;
int iot=12;

void setup() {
  Serial.begin(9600);
  pinMode(iot,OUTPUT);
  pinMode(LDR,INPUT);
  
}

void loop() {
  Serial.begin(9600);
  int val1=analogRead(LDR);
  if (val1 < 200) {
   digitalWrite(iot, HIGH);
  
  }else{
    digitalWrite(iot,LOW);
  }
  delay(100);
  
}
