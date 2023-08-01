// C++ code
//
int tilt=7,motor=6;
int reading;
void setup()
{
  pinMode(motor, OUTPUT);
  pinMode(tilt,INPUT);
}

void loop()
{
  reading=digitalRead(tilt);
 digitalWrite(motor,reading);
}