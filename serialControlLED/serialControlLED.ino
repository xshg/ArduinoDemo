int timeDelay = 1000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    Serial.println("ok");
  
    char c = Serial.read();
    Serial.println(c);
    if (c=='a'){
      timeDelay=100;
    }
    else if(c=='b'){
      timeDelay=500;
    }
    else if(c=='c'){
      timeDelay=1000;
    }
  }
  
  digitalWrite(13, HIGH);
  delay(timeDelay);
  digitalWrite(13, LOW);
  delay(timeDelay);
  
  
}
