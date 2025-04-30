// C++ code
//
int senha = 0;
int senha2 = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual a senha: ");
  while( !Serial.available() );
  senha = Serial.parseInt();
  Serial.println("Senha: " + String(senha));
  
  
  if( senha == 1234 ){
    Serial.println("Acesso Permitido");
  } else {
    Serial.println("Senha Incorreta"); 
  }
  
  delay(2000);
}  