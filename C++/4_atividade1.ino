// C++ code
//Faça um programa que receba o nome, o peso e a altura de uma pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso / (altura * altura).
String nome = " ";
float peso = 0;
float altura = 0;
float IMC = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite seu nome: ");
  while( !Serial.available() );
  nome = Serial.readStringUntil('\n');
  
  delay(500);
  
  Serial.println("Digite seu peso: ");
  while( !Serial.available() );
  peso = Serial.parseFloat();
  
  delay(500);
  
  Serial.println("Digite sua altura: ");
  while( !Serial.available() );
  altura = Serial.parseFloat();
  
  
  //Processamento
  IMC = peso / (altura * altura);
  
  
  //Saida
  Serial.println("Nome: " + nome);
  Serial.print("IMC: ");
  Serial.println(IMC, 2);  
}