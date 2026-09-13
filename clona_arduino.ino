#include <Servo.h>

Servo myServo;

void setup() {
  Serial.begin(9600);    // inicializace sériového portu
  myServo.attach(9);     // servo na pin D9
  myServo.write(40);     // počáteční pozice
  Serial.println("Arduino spuštěno, servo v pozici 20°");
}

void loop() {
  // pozice A
  myServo.write(40);
  Serial.println("Servo nastavene na pozici 20° (pozice A)");
  delay(30000);  // čekáme 15 sekund

  // pozice B
  myServo.write(100);
  Serial.println("Servo nastavene na pozici 160° (pozice B)");
  delay(30000);  // čekáme 15 sekund
}