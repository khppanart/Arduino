int bt = 17 ;
int wifi = 2 ;
int ntp = 15 ;
int iot = 12 ;

void setup() {
  pinMode(bt,OUTPUT);
  pinMode(wifi,OUTPUT);
  pinMode(ntp,OUTPUT);
  pinMode(iot,OUTPUT);

}

void loop() {
  stoppedd();
  delay(3000);
  forward();
  delay(3000);
  backward();
  delay(3000);
  Right();
  delay(3000);
  Left();
  delay(3000);
  stopped();
  delay(3000);
}
void stoppedd(){ 
  digitalWrite(bt,LOW);
  digitalWrite(wifi,LOW);
  digitalWrite(ntp,LOW);
  digitalWrite(iot,LOW);
}

void forward(){ //0101
  digitalWrite(bt,LOW);
  digitalWrite(wifi,HIGH);
  digitalWrite(ntp,LOW);
  digitalWrite(iot,HIGH);
}

void backward(){ //1010
  digitalWrite(bt,HIGH);
  digitalWrite(wifi,LOW);
  digitalWrite(ntp,HIGH);
  digitalWrite(iot,LOW);
}

void Right(){ 
  digitalWrite(bt,HIGH);
  digitalWrite(wifi,LOW);
  digitalWrite(ntp,LOW);
  digitalWrite(iot,HIGH);
}

void Left(){ 
  digitalWrite(bt,LOW);
  digitalWrite(wifi,HIGH);
  digitalWrite(ntp,HIGH);
  digitalWrite(iot,LOW);
}

void stopped(){ 
  digitalWrite(bt,HIGH);
  digitalWrite(wifi,HIGH);
  digitalWrite(ntp,HIGH);
  digitalWrite(iot,HIGH);
}
