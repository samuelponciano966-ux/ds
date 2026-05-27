// Desclaração de variáveis 
byte ledLaranja = 2;
byte ledAmarelo = 3;
byte ledVerde = 4;
byte ledAzul = 5;
byte ledBranco = 6;
int potencia = A1;
int valor = 0;

// Inicialização das variáveis 
void setup() {
  pinMode(ledLaranja, OUTPUT); 
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledBranco, OUTPUT);
  pinMode(potencia, INPUT);
  Serial.begin(9600);
}

// Lógica de funcionamento 
void loop() {
    valor = analogRead(A1);
  	Serial.println(valor);

  if (valor >=0 & valor < 205){
     digitalWrite(ledLaranja,1);
    digitalWrite(ledAmarelo, 0);
    digitalWrite(ledVerde, 0);
    digitalWrite(ledAzul, 0);
    digitalWrite(ledBranco, 0);
  }
  if (valor >=205 & valor <410){
    digitalWrite(ledLaranja, 0);
    digitalWrite(ledAmarelo, 1);
    digitalWrite(ledVerde, 0);
    digitalWrite(ledAzul, 0);
    digitalWrite(ledBranco, 0);
  }
  if (valor >=205 & valor <410){
    digitalWrite(ledLaranja, 0);
    digitalWrite(ledAmarelo, 0);
    digitalWrite(ledVerde, 1);
    digitalWrite(ledAzul, 0);
    digitalWrite(ledBranco, 0);
  }
   if (valor >=410 & valor <620){
    digitalWrite(ledLaranja,0);
    digitalWrite(ledAmarelo, 0);
    digitalWrite(ledVerde, 0);
    digitalWrite(ledAzul, 1);
    digitalWrite(ledBranco, 0);
  }
   
   if (valor >=620 & valor <830){
    digitalWrite(ledLaranja, 0);
    digitalWrite(ledAmarelo, 0);
    digitalWrite(ledVerde, 0);
    digitalWrite(ledAzul, 0);
    digitalWrite(ledBranco, 1);
  }
}    
  