// C++ code
//
int ledVermelho = 11;
int ledVerde = 13;
int ledAmarelo = 12; 
int escolha;
  
void setup()
{
  Serial.begin(9600);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop()
{
  do
  { 
    Serial.println("Oque voce deseja fazer?");
    Serial.println();
    Serial.println(" 1 - Ligar Luz Verde ");
    Serial.println(" 2 - Deligar Luz Verde ");
    Serial.println(" 3 - Ligar Luz Amarela ");
    Serial.println(" 4 - Desligar Luz Amarela ");
    Serial.println(" 5 - Ligar Luz Vermelha ");
    Serial.println(" 6 - Desligar Luz Vermelha ");
    Serial.println(" 7 - Ligar todas as luzes ");
    Serial.println(" 8 - Desligar todas as luzes ");
    while( ! Serial.available() ){}
    escolha = Serial.parseInt();
    
    switch( escolha )
    {
     case 1:
      digitalWrite(ledVerde, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
     break;
    
     case 2:
      digitalWrite(ledVerde, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
     break;
      
     case 3:
      digitalWrite(ledAmarelo, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
     break;
      
     case 4:
      digitalWrite(ledAmarelo, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
     break;
      
     case 5:
      digitalWrite(ledVermelho, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
     break;
      
     case 6:
      digitalWrite(ledVermelho, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
     break;
      
     case 7:
      digitalWrite(ledVerde, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(ledAmarelo, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(ledVermelho, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
     break;
      
     case 8:
      digitalWrite(ledVerde, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(ledAmarelo, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(ledVermelho, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
     break;
      
      default:
      Serial.println("Escolha inexistente!!! Escolha uma opcao de 1 a 6");
    }
    
  }
  while( escolha <= 8 );  
    delay(3000);
    
}
  
  