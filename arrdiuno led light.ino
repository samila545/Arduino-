// C++ code
//
int animationspeed = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

  animationspeed = 400;
}

void loop()
{
  animationspeed = 400;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(animationspeed); // Wait for animation speed millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(animationspeed); // Wait for animation speed millisecond(s)
  digitalWrite(12, HIGH);
  delay(animationspeed); // Wait for animation speed millisecond(s)
  digitalWrite(12, LOW);
  delay(animationspeed); // Wait for animation speed millisecond(s)
  digitalWrite(11, HIGH);
  delay(animationspeed); // Wait for animation speed millisecond(s)
  digitalWrite(11, LOW);
}