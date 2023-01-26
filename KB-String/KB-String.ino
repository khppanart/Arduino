String str = "CDTI \n" ;
String name12 = "Suppanart" ;
int age = 15 ;
float gpa = 4 ;

void setup() {
 Serial.begin(9600);
 str += "Hello \t" ;
 str += "World" ;
 
 Serial.println("Name:" + name12);
 Serial.println("Age:" + (String)age + "Years \t");
 Serial.println("GPA:" + (String)gpa);

}

void loop() {
  Serial.println(str);
  delay(1000);

}
