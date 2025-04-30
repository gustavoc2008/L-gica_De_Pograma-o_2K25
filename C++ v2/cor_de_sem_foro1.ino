// C++ code
//
String cor = " ";
String cor2 = " ";

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual a cor: ");
  while( !Serial.available() );
  cor = Serial.readString();
  Serial.println("Cor: " + cor);
  
  
  if( cor == "verde" ){
    Serial.println("Siga");
  } else {
    Serial.println("Pare"); 
  }
  
  delay(2000);
}  