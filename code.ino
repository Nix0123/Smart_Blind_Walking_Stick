#define trigPin 9
#define echoPin 10
#define buzzer 7

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo time
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // ---------- Alert Logic ----------
  if (distance > 0 && distance < 20) {
    // Very close = fast beep
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);
  }
  else if (distance >= 20 && distance < 50) {
    // Medium distance = slow beep
    digitalWrite(buzzer, HIGH);
    delay(400);
    digitalWrite(buzzer, LOW);
    delay(400);
  }
  else {
    // Safe distance = silent
    digitalWrite(buzzer, LOW);
    delay(100);
  }
}