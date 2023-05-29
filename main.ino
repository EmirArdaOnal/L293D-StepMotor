#include <AFMotor.h>

AF_Stepper motor(48, 2);  // 48 adım / devir, 2 numaralı motor bağlantı pini

void setup() {
  motor.setSpeed(100);  // Motor hızı (adım/saniye)
}

void loop() {
  // İleri yönde 100 adım
  for (int i = 0; i < 100; i++) {
    motor.step(1, FORWARD, SINGLE);  // 1 adım ileri hareket et
    delay(10);  // 10 milisaniye bekleme
  }

  delay(1000);  // 1 saniye bekle

  // Geri yönde 100 adım
  for (int i = 0; i < 100; i++) {
    motor.step(1, BACKWARD, SINGLE);  // 1 adım geri hareket et
    delay(10);  // 10 milisaniye bekleme
  }

  delay(1000);  // 1 saniye bekle
}
