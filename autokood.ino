const int CH1 = 2; // pööramine
const int CH2 = 3; // edasi/tagasi

const int ENA = 5;
const int ENB = 6;
const int IN1 = 8;
const int IN2 = 9;
const int IN3 = 10;
const int IN4 = 11;

void setup() {
  pinMode(CH1, INPUT);
  pinMode(CH2, INPUT);

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  int ch1 = pulseIn(CH1, HIGH, 30000);
  int ch2 = pulseIn(CH2, HIGH, 30000);

  if (ch1 < 900 || ch2 < 900) {
    stopMotors();
    return;
  }
