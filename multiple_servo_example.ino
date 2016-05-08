/*
 * Copyright 2016 (C) layadcircuits.com
 * Project: 
 * An example of how to setup an Arduino Sketch for multiple servo control
 * Author: Chris Malecadn / chris@layadcircuits.com
 * For Questions/Comments: chris@layadcircuits.com
 * Revision History:
 * 1.0 - initial commit
 */

#include <Servo.h>

Servo s1;
Servo s2;
Servo s3;
Servo s4;

void setup() {
  s1.attach(8);  
  s2.attach(9);  
  s3.attach(10);  
  s4.attach(11);              
}

void loop() {
  s1.write(178);delay(500);
  s2.write(178);delay(500);
  s3.write(178);delay(500);
  s4.write(178);delay(500);
  s1.write(2);delay(500);
  s2.write(2);delay(500);
  s3.write(2);delay(500);
  s4.write(2);delay(500); 
}

