//.......... Livro IoT na Prática - PROGRAMA 1 - Blink LED ....................//

int LED1 = 17; // Seleciona o nome LED1 para o GPIO17 do ESP32
void setup() 
{
  pinMode(LED1, OUTPUT); // Configura o GPIO17 do ESP32 como saída
}

void loop() 
{
  digitalWrite(LED1, HIGH); // Envia nível alto para o GPIO17 do  ESP32
  delay(1000);              // Aguarda 1 Segundo
  digitalWrite(LED1, LOW);  // Envia nível baixo para o GPIO17 do  ESP32
  delay(1000);              // Aguarda 1 Segundo
}
