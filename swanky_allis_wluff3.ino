// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH); // verde1
  digitalWrite(12, LOW); // amarelo1
  digitalWrite(11, LOW); // vermelho1
  digitalWrite(10, LOW); // verde2
  digitalWrite(9, LOW); // amarelo2
  digitalWrite(8,HIGH); // vermelho2
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW); // verde1
  digitalWrite(12, HIGH); // amarelo1
  digitalWrite(11, LOW); // vermelho1
  digitalWrite(10, LOW); // verde2
  digitalWrite(9, LOW); // amarelo2
  digitalWrite(8, HIGH); // vermelho2
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW); // verde1
  digitalWrite(12, LOW); // amaralo1
  digitalWrite(11, HIGH); // vermelho1
  digitalWrite(10, HIGH); // verde2
  digitalWrite(9, LOW); // amarelo2
  digitalWrite(8, LOW); // vermelho2
  delay(5000); //Wait for 1000 millisecond(s)
  digitalWrite(13, LOW); // verde1
  digitalWrite(12, LOW); // amarelo1
  digitalWrite(11, HIGH); // vermelho1
  digitalWrite(10, LOW); // verde2
  digitalWrite(9, HIGH); // amarelo2
  digitalWrite(8, LOW); // vermelho2
  delay(2000);
}