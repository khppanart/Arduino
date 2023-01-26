const int bt = 17 ;
const int wifi = 2 ;
const int ntp = 15 ;
const int iot = 12 ;
const int sw1 = 16;
const int sw2 = 14;


void setup() {
  pinMode(bt, OUTPUT);
  pinMode(wifi, OUTPUT);
  pinMode(ntp, OUTPUT);
  pinMode(iot, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);

}

void loop()
{
  if(digitalRead(sw1)== LOW){
    forward();
  }else{
    stopped();
  }
  if(digitalRead(sw2)== LOW){
    backward();
  }else{
    stopped();
  }

}
