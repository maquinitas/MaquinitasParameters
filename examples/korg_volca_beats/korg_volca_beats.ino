#include <KorgVolcaBeats.h>

KorgVolcaBeats beats;

void setup() {

  Serial.begin(9600);

}

void loop() {

  Serial.println(beats.kick);

}