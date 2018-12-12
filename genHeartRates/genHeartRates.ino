/*
 * Demo for generate heart rate sample datas
 * xshg.
 * ver .1
 * 2018.12.12
 */
int delayTime = 100;  // generate data interval
void setup() {
  // setup Serial port transfer bit race
  Serial.begin(9600);
}

void loop() {
  // in loop generate 20 numbers for drawing
  Serial.println(random(18,23));  // one num [18, 23)
  delay(delayTime);
  for (int i=0; i<5; i++){
    // 5 nums [20, 23)
    Serial.println(random(20,23));
    delay(delayTime);
  }
  for (int i=0; i<3; i++){
    // 5 nums [19, 22)
    Serial.println(random(19,22));
    delay(delayTime);
  }
  for (int i=0; i<2; i++){
    // 5 nums [18, 21)
    Serial.println(random(18,21));
    delay(delayTime);
  }
  Serial.println(random(87,94));  // one num [87, 94)
  delay(delayTime);
  Serial.println(random(-93,-86));  // one num [-93, -86)
  delay(delayTime);
  Serial.println(random(18,23));  // one num [18, 23)
  delay(delayTime);
  Serial.println(random(33,38));  // one num [33, 38)
  delay(delayTime);
  Serial.println(random(43,48));  // one num [43, 48)
  delay(delayTime);
  Serial.println(random(58,63));  // one num [58, 63)
  delay(delayTime);
  Serial.println(random(68,73));  // one num [68, 73)
  delay(delayTime);
  Serial.println(random(58,63));  // one num [58, 63)
  delay(delayTime);
  Serial.println(random(38,43));  // one num [38, 42)
  delay(delayTime);
}
