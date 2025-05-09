// C++ code
//Variavel
int opcao = 0;



void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Escolha uma Fruta: ");
  Serial.println("  1 - Banana");
  Serial.println("  2 - Maca");
  Serial.println("  3 - Tomate");
  Serial.println("  4 - Laranja");
  while( ! Serial.available() );
  opcao = Serial.parseInt();
  
  switch(opcao)
  {                   
    case 1:
         Serial.println("Sua escolha: Banana");
    break;
    case 2:
         Serial.println("Sua escolha: Maca");
    break;
    case 3:
         Serial.println("Sua escolha: Tomate");
    break;
    case 4:
         Serial.println("Sua escolha: Laranja");
    break;
    default:
         Serial.println("Voce e autista? Tem essa opcao?");
    
   }
    Serial.println(); 
    delay(6000);                    
}
                          