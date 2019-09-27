/*
  Created by TEOS
  Domotic with Arduino https://goo.gl/btZpjs
  YouTube https://goo.gl/k7TUSZ
  Instagram https://goo.gl/zEIjia
  Facebook https://goo.gl/eivraR
  Twitter https://goo.gl/du5Wgn
  Github https://goo.gl/Xl5IiS
  WEB https://www.proyecto-teos.com
*/

const uint8_t liquidLevelSensorT = 2;
String resultSerialT;

void setup() {
  Serial.begin(9600);
  pinMode(liquidLevelSensorT, INPUT);
}

void loop() {
  bool stateLevelT = digitalRead(liquidLevelSensorT);
  resultSerialT = "El tanque esta ";
  resultSerialT += (stateLevelT) ? "lleno." : "vacio.";
  Serial.println(resultSerialT);
  delay(1000);
}
