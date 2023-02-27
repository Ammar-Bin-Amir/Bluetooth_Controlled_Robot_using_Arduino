char AZ;

void setup()
{
  // put your setup code here, to run once:
  pinMode(2,OUTPUT); //Left Motor Pin 1
  pinMode(3,OUTPUT); //PWM Pin 1
  pinMode(4,OUTPUT); //Left Motor Pin 2
  pinMode(5,OUTPUT); //Right Motor Pin 1
  pinMode(6,OUTPUT); //PWM Pin 2
  pinMode(7,OUTPUT); //Right Motor Pin 2
  Serial.begin(9600); //Enable Serial Communications
}

void loop()
{
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    AZ = Serial.read();
    Serial.println(AZ);
  }
  if(AZ == 'F')
  {
    digitalWrite(2,HIGH);//LM
    analogWrite(3,255);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);//RM
    analogWrite(6,255);
    digitalWrite(7,LOW);
  }
  else if(AZ == 'B')
  {
    digitalWrite(2,LOW);//LM
    analogWrite(3,255);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);//RM
    analogWrite(6,255);
    digitalWrite(7,HIGH);
  }
  else if(AZ == 'R')
  {
    digitalWrite(2,HIGH);//LM
    analogWrite(3,255);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);//RM
    analogWrite(6,0);
    digitalWrite(7,LOW);
  }
  else if(AZ == 'L')
  {
    digitalWrite(2,HIGH);//LM
    analogWrite(3,255);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);//RM
    analogWrite(6,255);
    digitalWrite(7,LOW);
  }
  else if(AZ == 'S')
  {
    digitalWrite(2,HIGH);//LM
    analogWrite(3,0);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);//RM
    analogWrite(6,0);
    digitalWrite(7,LOW);
  }
  delay(100);
}
}
