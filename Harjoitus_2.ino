#define LED1 5
#define LEDON LOW
#define LEDOFF HIGH

void setup() {
  
pinMode (LED1,OUTPUT);
Serial.begin(9600);
}
int viive = 500;
void loop() {
  digitalWrite (LED1,LEDON);
  Serial.println("ledi päällä");
  delay(viive);

  digitalWrite (LED1,LEDOFF);
  Serial.println("ledi poispäältä");
  delay(viive);
}
