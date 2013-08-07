void setup() {
  pinMode(13, OUTPUT);
}


void loop(){
  int i = 0;
  for(i=0; i<10; i++)
  {
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(100);
  }

  for(i=0; i<2; i++)
  {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  }
}
  
