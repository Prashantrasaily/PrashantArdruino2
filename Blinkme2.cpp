int led1 =11;
int led2 = 12;
int led3 = 13;

void setup() {
//pinMode(LED_BUILTIN,OUTPUT );

pinMode(led1, OUTPUT);

}

void loop() {
  for(int count=0;count <=10;count++){
  digitalWrite(led1,HIGH);
  delay(100);
  digitalWrite(led1,LOW);
  delay(100);
  }

  for(int count=0;count <=15;count++){
  digitalWrite(led2,HIGH);
  delay(100);
  digitalWrite(led2,LOW);
  delay(100);
  }

  for(int count=0;count <=20;count++){
  digitalWrite(led3,HIGH);
  delay(100);
  digitalWrite(led3,LOW);
  delay(100);
  }
  
}
