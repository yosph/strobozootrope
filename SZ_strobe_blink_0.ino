//==============================================
// Title : SZ_strobe_blink_0
// Project : STROBOZOOTROPE
// Detail : DIY optical sytem from old turntable (78 to 33 RPM)
// Author : Joseph BURKARTH
// =============================================
int LED_STRIP_D3 = 3;
int POT_PIN_A6 = A6;

int POT_VALUE;
int ON_DELAY = 1;
int OFF_DELAY;

void setup() {
  pinMode(LED_STRIP_D3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  POT_VALUE = analogRead(POT_PIN_A6);
  OFF_DELAY = map(POT_VALUE, 0, 1024, 100, 1);

  Serial.print("DOWN : ");
  Serial.println(OFF_DELAY);

  digitalWrite(LED_STRIP_D3, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(ON_DELAY);                   // wait for a second
  digitalWrite(LED_STRIP_D3, LOW);   // turn the LED off by making the voltage LOW
  delay(OFF_DELAY);                  // wait for a second
}
