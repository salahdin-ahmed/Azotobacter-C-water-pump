int WATERPUMP =13;

void setup() {
pinMode(WATERPUMP,OUTPUT);
  Serial.begin(9600);
}

void loop() {
digitalWrite(WATERPUMP,HIGH);
delay(4000);
digitalWrite(WATERPUMP,LOW);
delay(4000);
}
