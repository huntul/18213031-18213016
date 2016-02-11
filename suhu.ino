float tempc;
int tempx;
int temppin = 0;
int ledpin = 13;

void setup()
{
  Serial.begin(9600); 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
}

void loop()
{
  tempc = analogRead(temppin);
  tempc = (5.0 * tempc * 100.0) / 1024.0;
  tempx = (int)tempc;
  Serial.println(tempx);
  
  delay(10);
   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, LOW);
   digitalWrite(10, LOW);
   digitalWrite(11, LOW);
   digitalWrite(12, LOW);
   digitalWrite(A1, LOW);
   digitalWrite(A2, LOW);
   digitalWrite(A3, LOW);
   digitalWrite(A4, LOW);
   digitalWrite(A5, LOW);
   
  if (tempx == 0)
  {
    Anort();
  }
   if (tempx == 1)
  {
    Aone();
  }
  if(tempx == 2)
  {
    Atwo();
  }
  if(tempx == 3)
  {
    Athree();
  }
  if(tempx == 4)
  {
    Afour();
  }
  if(tempx == 5)
  {
    Afive();
  }
  if(tempx == 6)
  {
    Asix();
  }
  if(tempx == 7)
  {
    Aseven();
  }
  if(tempx == 8)
  {
    Aeight();
  }
  if(tempx == 9)
  {
    Anine();
  }
  if(tempx == 10)
  {
    Aone();
    Bnort();
  }
  if(tempx == 11)
  {
    Aone();
    Bone();
  }
  if(tempx == 12)
  {
    Aone();
    Btwo();
  }
  if(tempx == 13)
  {
    Aone();
    Bthree();
  }
  if(tempx == 14)
  {
    Aone();
    Bfour();
  }
  if(tempx == 15)
  {
    Aone();
    Bfive();
  }
  if(tempx == 16)
  {
    Aone();
    Bsix();
  }
  if(tempx == 17)
  {
    Aone();
    Bseven();
  }
  if(tempx == 18)
  {
    Aone();
    Beight();
  }
  if(tempx == 19)
  {
    Aone();
    Bnine();
  }
  if(tempx == 20)
  {
    Atwo();
    Bnort();
  }
  if(tempx == 21)
  {
    Atwo();
    Bone();
  }
  if(tempx == 22)
  {
    Atwo();
    Btwo();
  }
  if(tempx == 23)
  {
    Atwo();
    Bthree();
  }
  if(tempx == 24)
  {
    Atwo();
    Bfour();
  }
  if(tempx == 25)
  {
    Atwo();
    Bfive();
  }
  if(tempx == 26)
  {
    Atwo();
    Bsix();
  }
  if(tempx == 27)
  {
    Atwo();
    Bseven();
  }
  if(tempx == 28)
  {
    Atwo();
    Beight();
  }
  if(tempx == 29)
  {
    Atwo();
    Bnine();
  }
  if(tempx == 30)
  {
    Athree();
    Bnort();
  }
  if(tempx == 31)
  {
    Athree();
    Bone();
  }
  if(tempx == 32)
  {
    Athree();
    Btwo();
  }
  if(tempx == 33)
  {
    Athree();
    Bthree();
  }
  if(tempx == 34)
  {
    Athree();
    Bfour();
  }
  if(tempx == 35)
  {
    Athree();
    Bfive();
  }
  if(tempx == 36)
  {
    Athree();
    Bsix();
  }
  if(tempx == 37)
  {
    Athree();
    Bseven();
  }
     if(tempx == 38)
  {
    Athree();
    Beight();
  }
  if(tempx == 39)
  {
    Athree();
    Bnine();
  }
  if(tempx == 40)
  {
    Afour();
    Bnort();
  }
  if(tempx == 41)
  {
    Afour();
    Bone();
  }
     if(tempx == 42)
  {
Afour();
Btwo();
  }
     if(tempx == 43)
  {
Afour();
Bthree();
  }
    if(tempx == 44)
  {
Afour();
Bfour();
  }
    if(tempx == 45)
  {
Afour();
Bfive();
  }
    if(tempx == 46)
  {
Afour();
Bsix();
  }
    if(tempx == 47)
  {
Afour();
Bseven();
  }
     if(tempx == 48)
  {
Afour();
Beight();
  }
     if(tempx == 49)
  {
Afour();
Bnine();
  }
     if(tempx == 50)
  {
Afive();
Bnort();
  }
        if(tempx == 51)
  {
Afive();
Bone();
  }
     if(tempx == 52)
  {
Afive();
Btwo();
  }
     if(tempx == 53)
  {
Afive();
Bthree();
  }
    if(tempx == 54)
  {
Afive();
Bfour();
  }
    if(tempx == 55)
  {
Afive();
Bfive();
  }
    if(tempx == 56)
  {
Afive();
Bsix();
  }
    if(tempx == 57)
  {
Afive();
Bseven();
  }
     if(tempx == 58)
  {
Afive();
Beight();
  }
     if(tempx == 59)
  {
Afive();
Bnine();
  }
     if(tempx == 60)
  {
Asix();
Bnort();
  }
          if(tempx == 61)
  {
Asix();
Bone();
  }
     if(tempx == 62)
  {
Asix();
Btwo();
  }
     if(tempx == 63)
  {
Asix();
Bthree();
  }
    if(tempx == 64)
  {
Asix();
Bfour();
  }
    if(tempx == 65)
  {
Asix();
Bfive();
  }
    if(tempx == 66)
  {
Asix();
Bsix();
  }
    if(tempx == 67)
  {
Asix();
Bseven();
  }
     if(tempx == 68)
  {
Asix();
Beight();
  }
     if(tempx == 69)
  {
Asix();
Bnine();
  }
     if(tempx == 70)
  {
Aseven();
Bnort();
  }
            if(tempx == 61)
  {
Asix();
Bone();
  }
     if(tempx == 62)
  {
Asix();
Btwo();
  }
     if(tempx == 63)
  {
Asix();
Bthree();
  }
    if(tempx == 64)
  {
Asix();
Bfour();
  }
    if(tempx == 65)
  {
Asix();
Bfive();
  }
    if(tempx == 66)
  {
Asix();
Bsix();
  }
    if(tempx == 67)
  {
Asix();
Bseven();
  }
     if(tempx == 68)
  {
Asix();
Beight();
  }
     if(tempx == 69)
  {
Asix();
Bnine();
  }
     if(tempx == 70)
  {
Aseven();
Bnort();
  }
            if(tempx == 71)
  {
Aseven();
Bone();
  }
     if(tempx == 72)
  {
Aseven();
Btwo();
  }
     if(tempx == 73)
  {
Aseven();
Bthree();
  }
    if(tempx == 74)
  {
Aseven();
Bfour();
  }
    if(tempx == 75)
  {
Aseven();
Bfive();
  }
    if(tempx == 76)
  {
Aseven();
Bsix();
  }
    if(tempx == 77)
  {
Aseven();
Bseven();
  }
     if(tempx == 78)
  {
Aseven();
Beight();
  }
     if(tempx == 79)
  {
Aseven();
Bnine();
  }
     if(tempx == 80)
  {
Aeight();
Bnort();
  }
            if(tempx == 81)
  {
Aeight();
Bone();
  }
     if(tempx == 82)
  {
Aeight();
Btwo();
  }
     if(tempx == 83)
  {
Aeight();
Bthree();
  }
    if(tempx == 84)
  {
Aeight();
Bfour();
  }
    if(tempx == 85)
  {
Aeight();
Bfive();
  }
    if(tempx == 86)
  {
Aeight();
Bsix();
  }
    if(tempx == 87)
  {
Aeight();
Bseven();
  }
     if(tempx == 88)
  {
Aeight();
Beight();
  }
     if(tempx == 89)
  {
Aeight();
Bnine();
  }
  
          if(tempx == 90)
  {
Asix();
Bone();
  }
     if(tempx == 91)
  {
Anine();
Bnort();

  }
     if(tempx == 92)
  {
Anine();
Btwo();

  }
    if(tempx == 93)
  {
Anine();
Bthree();

  }
    if(tempx == 94)
  {
Anine();
Bfour();

  }
    if(tempx == 95)
  {
Anine();
Bfive();

  }
    if(tempx == 96)
  {
Anine();
Bsix();

  }
     if(tempx == 97)
  {
Anine();
Bseven();

  }
     if(tempx == 98)
  {
Anine();
Beight();

  }
     if(tempx == 99)
  {
Anine();
Bnine();

  } 
  if(tempx > 99)
  {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
  }

delay(800);
 


}
void Anort()
{
  digitalWrite(2, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
}

void Aone()
{
   digitalWrite(A1, HIGH);
   digitalWrite(7, HIGH);
}

void Atwo()
{
    digitalWrite(2, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
}

void Athree()
{
  digitalWrite(2,HIGH);
  digitalWrite(A1,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
}

void Afour()
{
 digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(A1,HIGH);
digitalWrite(7,HIGH);
}

void Afive()
{
 digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);

}

void Asix()
{
 digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);
}

void Aseven()
{
 digitalWrite(2,HIGH);
digitalWrite(A1,HIGH);
digitalWrite(7,HIGH);
}

void Aeight()
{
 digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(A1,HIGH);
digitalWrite(5,HIGH);
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
}

void Anine()
{
 digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(A1,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
}
void Bnort()
{
  digitalWrite(A4, HIGH);
  digitalWrite(A5, HIGH);
  digitalWrite(A3, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
}
void Bone()
{
   digitalWrite(A5, HIGH);
   digitalWrite(11, HIGH);
}

void Btwo()
{
    digitalWrite(A4, HIGH);
    digitalWrite(A5, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
}

void Bthree()
{
  digitalWrite(A4,HIGH);
  digitalWrite(A5,HIGH);
  digitalWrite(A2,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
}

void Bfour()
{
 digitalWrite(A3,HIGH);
digitalWrite(A2,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(11,HIGH);
}

void Bfive()
{
 digitalWrite(A4,HIGH);
digitalWrite(A3,HIGH);
digitalWrite(A2,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);

}

void Bsix()
{
 digitalWrite(A4,HIGH);
digitalWrite(A3,HIGH);
digitalWrite(A2,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
}

void Bseven()
{
 digitalWrite(A4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(11,HIGH);
}

void Beight()
{
 digitalWrite(A4,HIGH);
digitalWrite(A3,HIGH);
digitalWrite(A2,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(9,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
}

void Bnine()
{
 digitalWrite(A4,HIGH);
digitalWrite(A3,HIGH);
digitalWrite(A2,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
}
