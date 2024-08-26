#define EXTLED 13
#define INTLED 2
#define REDLED 25

void setup() {
  pinMode(INTLED,OUTPUT);
  pinMode(EXTLED,OUTPUT);
  pinMode(REDLED,OUTPUT);

}
void loop() {
  delay(1000);
  digitalWrite(INTLED,HIGH);
  digitalWrite(EXTLED,LOW);
  digitalWrite(REDLED,HIGH);  
  delay(1000);
  digitalWrite(INTLED,LOW); 
  digitalWrite(EXTLED,HIGH);   
  digitalWrite(REDLED,LOW);   

}

