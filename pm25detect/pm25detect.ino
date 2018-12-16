int dustPin = 0;
float dustVal = 0;
int ledPower = 2;
int delayTime = 280;
int delayTime2 = 40;
float offTime = 9680;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(ledPower, OUTPUT);
  pinMode(dustPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPower, LOW);
  delayMicroseconds(delayTime);
  dustVal = analogRead(dustPin);
  delayMicroseconds(delayTime2);
  digitalWrite(ledPower, HIGH);
  delayMicroseconds(offTime);
  delay(1000);
  if(dustVal>36.455){
    Serial.println((float(dustVal/1024)-0.0356)*120000*0.035);
  }
}
