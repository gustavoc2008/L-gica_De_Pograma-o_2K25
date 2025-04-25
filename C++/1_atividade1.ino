// C++ code
//Faça um programa que receba a idade de uma pessoa em anos e imprima essa idade em: Meses, Dias, Horas, Minutos.
int meses = 0;
int dias = 0;
unsigned long  horas = 0;
unsigned long minutos = 0;
int idade = 0;
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite sua idade em anos");
  while( ! Serial.available() );
  idade = Serial.parseInt();
  
  //Processamento
  meses = idade * 12;
  dias = idade * 365;
  horas = idade * 8760;
  minutos = idade * 525960;
  
  
  
  
  
  //Saida
  Serial.println("Idade em Meses: " + String(meses));
  Serial.println("Idade em Dias: " + String(dias));
  Serial.println("Idade em Horas: " + String(horas));             
  Serial.println("Idade em Minutos: " + String(minutos));
  
}