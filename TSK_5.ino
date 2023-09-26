#define pb 2
long t=0;
float d=0;
void setup() {
pinMode(pb,INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {
t=millis();
  while(!digitalRead(pb)){
    d=millis()-t;
    if(digitalRead(pb)){
     Serial.print("Time= ");
    Serial.print(d/1000);
    Serial.println(" s");
    }
  }
}
    
 
