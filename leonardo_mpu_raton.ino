/*Program Uploaded By Sayooj For More Sayoojjsmail@gmail.com
Este codigo fue encontrado y modificado desde https://www.youtube.com/watch?v=t4htl3yNw2U
pines :
digital 3 hacia scl
digital 2 hacia sda
analogo A5 en hacia int
*/
#include <Wire.h>
#include <I2Cdev.h>
#include <MPU6050.h>

#define LBUT  4
#define RBUT  5

MPU6050 mpu;
int16_t ax, ay, az, gx, gy, gz;

int angleToDistance(int a) {
  if (a < -80) {
    return -40;
  }
  else if (a < -65) {
    return -20;
  }
  else if (a < -50) {
    return -10;
  }
  else if (a < -15) {
    return -5;
  }
  else if (a < -5) {
    return -1;
  }
  else if (a > 80) {
    return 40;
  }
  else if (a > 65) {
    return 20;
  }
  else if (a > 15) {
    return 10;
  }
  else if (a > 5) {
    return 1;
  }
  else {
    return 0;
  }
}

void setup() {
  pinMode(LBUT, INPUT);
  digitalWrite(LBUT, HIGH);
  pinMode(RBUT, INPUT);
  digitalWrite(RBUT, HIGH);
  Wire.begin();
  mpu.initialize();
  if (!mpu.testConnection()) {
    while (1);
  }
}

void loop() {
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
  int vx = map(ax, -16000, 16000, 90, -90);
  int vy = map(ay, -16000, 16000, 90, -90);
  Mouse.move(angleToDistance(vx), angleToDistance(vy));
  if (digitalRead(LBUT) == LOW) {
    if (!Mouse.isPressed(MOUSE_LEFT)) {
      Mouse.press(MOUSE_LEFT);
    }
  }
  else {
    if (Mouse.isPressed(MOUSE_LEFT)) {
      Mouse.release(MOUSE_LEFT);
    }
  }
  if (digitalRead(RBUT) == LOW) {
    if (!Mouse.isPressed(MOUSE_RIGHT)) {
      Mouse.press(MOUSE_RIGHT);
    }
  }
  else {
    if (Mouse.isPressed(MOUSE_RIGHT)) {
      Mouse.release(MOUSE_RIGHT);
    }
  }
  delay(20);
}

