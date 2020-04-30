#define soil_moisture 12
#define pump 11

void setup() {
  // put your setup code here, to run once:
  pinMode(pump, OUTPUT);
  pinMode(soil_moisture, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(soil_moisture);
  Serial.println(val);
  if(val == 1)
  {
    digitalWrite(pump, HIGH);
  }
  else
  {
    digitalWrite(pump, LOW);
  }
}
