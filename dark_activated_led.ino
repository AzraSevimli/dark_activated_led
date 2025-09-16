int orange=3;

void setup()
{
  Serial.begin(9600);
  pinMode(orange,OUTPUT);
}

void loop()
{
  int ldr_sensor_value = analogRead(A0);
  Serial.println(ldr_sensor_value);
  
  if(ldr_sensor_value<=250)
  {
    digitalWrite(orange,HIGH);
  }
  
  else
  {
    digitalWrite(orange,LOW);
  }
  
  delay(500);
}