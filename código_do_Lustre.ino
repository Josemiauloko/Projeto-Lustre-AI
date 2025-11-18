// Definição dos pinos dos LEDs
const int led1 = 9;
const int led2 = 10;
const int led3 = 11;

// Variável para controlar a velocidade do efeito
int velocidade = 10; 

void setup() {
  // Configura os pinos como saída
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // --- EFEITO 1: Aumentar brilho (Fade In) ---
  // Vai de 0 (apagado) até 255 (brilho máximo)
  for (int brilho = 0; brilho <= 255; brilho++) {
    analogWrite(led1, brilho);
    analogWrite(led2, brilho);
    analogWrite(led3, brilho);
    delay(velocidade);
  }

  // Mantém o lustre totalmente aceso por 2 segundos
  delay(2000);

  // --- EFEITO 2: Diminuir brilho (Fade Out) ---
  // Vai de 255 (máximo) até 0 (apagado)
  for (int brilho = 255; brilho >= 0; brilho--) {
    analogWrite(led1, brilho);
    analogWrite(led2, brilho);
    analogWrite(led3, brilho);
    delay(velocidade);
  }
  
  // Mantém apagado por meio segundo antes de recomeçar
  delay(500);
}
