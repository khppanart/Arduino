int x[3] ={'A', 'B','C'}; //[_]เก็บได้กี่ค่า...
char y[3] ={'A', 'B','C'};

void setup() {
  Serial.begin(9600);
  Serial.println("\n"+(String)x[0] + "=" + (String)y[0]);
  Serial.println((String)x[1]+"="+(String)y[1]);
  Serial.println((String)x[2] + "=" + (String)y[2]);
  //Serial.println(y[0]);
  //Serial.println(y[1]);
  //Serial.println(y[2]);
}

void loop() {
  
}
