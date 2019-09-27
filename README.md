# Sensor de nivel de liquido vertical con Arduino
Obtén el estado del sensor de líquidos con Arduino.

### Requisitos
- Tener el IDE de [Arduino](https://www.arduino.cc/en/Main/Software) (o el de tu preferencia) con la versión más actual
- Tener el material para hacer el proyecto

### Código
**[Aqui](https://github.com/proyectoTEOS/Sensor-de-nivel-de-liquido-vertical-con-Arduino/blob/master/Sensor-de-nivel-de-liquido-vertical-con-Arduino.ino)** podrás obtener el link del código, también dejaremos
una vista previa aquí abajo.

```c++
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
```

### Diagrama
El siguiente esquemático muestra como se debe conectar todos los componentes con la placa.
![](https://github.com/proyectoTEOS/Sensor-de-nivel-de-liquido-vertical-con-Arduino/blob/master/Sensor-de-nivel-de-liquido-vertical-con-Arduino.jpg)
