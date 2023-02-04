#define COUNT_OF(x) (sizeof(x) / sizeof(x[0]))

uint8_t const speeds[]={0, 63, 127, 191, 255};

void setup() { Serial.begin(9600); }

void loop() {
  uint8_t fan_speed;
  for (uint8_t i = 0; i < COUNT_OF(speeds); i++) {
    fan_speed = speeds[i];
    Serial.print("speed = ");
    Serial.println(fan_speed);
    analogWrite(9, fan_speed);
    delay(10000);
  }
}