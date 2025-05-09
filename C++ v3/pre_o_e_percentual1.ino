//Elabore um programa para cálculo de preços de produtos que solicite o preço
//de compra do produto e o percentual a ser aplicado em cima desse valor para
//a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
//aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
//produto será vendido com uma margem muito pequena de lucro.

//Variaveis
float preco = 0;
float percentual = 0;
float precoDeVenda = 0;




void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite o preco do produto: ");
  while( ! Serial.available() );
  preco = Serial.parseFloat();
  
  Serial.println("Digite o percentual: ");
  while( ! Serial.available() );
  percentual = Serial.parseFloat();
  
  float precoDeVenda = preco + (preco * percentual);
 
  if( percentual < 0.50 ){
  Serial.println("Seu preco: " + String(preco));
  Serial.println("Seu percentual: " + String(percentual));
  Serial.println("Seu produto sera vendido com uma margem muito pequena de lucro");
  Serial.println("O Valor de Venda do Produto: " + String(precoDeVenda));
  }
  
  else{
  Serial.println("Seu preco: " + String(preco));
  Serial.println("Seu percentual: " + String(percentual));
  Serial.println("O Valor de Venda do Produto: " + String(precoDeVenda));
  Serial.println("Seu produto sera vendido com uma margem de lucro boa");
  }
  
}  
