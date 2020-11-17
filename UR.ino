int trig=10;
int echo=9;
int buzzer=13;

void setup()
{
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
  
}
void loop()
{ 
  long distance,duration;
  digitalWrite(trig,0);
  delayMicroseconds(2);
  digitalWrite(trig,1);
  delayMicroseconds(10);
  digitalWrite(trig,0);
  duration = pulseIn(echo,1);
  distance = (duration/2)/29.1;
  Serial.println(distance);
  delay(500);
  if(distance<10)
  {
    Serial.println("distance is less than 10");
    digitalWrite(buzzer,1);
    }
  else
   {
       digitalWrite(buzzer,0);
    }
}

