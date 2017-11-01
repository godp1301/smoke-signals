
const int SIGNAL = 10;
const int MIN_DURATION = 12;
const int MAX_DURATION = 15;
const int MIN_TIMEOUT = 40;
const int MAX_TIMEOUT = 60;

void setup() {
  pinMode(10 , OUTPUT);
}

int getDuration() {
  return random(MIN_DURATION, MAX_DURATION);
}

int getTimeout() {
  return random(MIN_TIMEOUT, MAX_TIMEOUT);
}

void loop() {
  digitalWrite(SIGNAL, HIGH);
  delay(getDuration() * 1000);
  digitalWrite(SIGNAL, LOW);
  delay(getTimeout() * 1000);
}
