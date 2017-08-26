/*
   

 */
 
 //Inicializa pino para leituras do sensor
 int spin = 3;

void setup() {
  // Inicializa comunicaçao serial
  Serial.begin(9600);
  
  //Leitura dos dados do sensor
  pinMode(spin, INPUT);
  
  // Inicializar pino digital 13 como saida
  pinMode(13, OUTPUT);
  
}

void loop() {
  //Declaraçao de variavel que alocara valores do sensor XXXXX
  int sensor;

  //Leitura dos valores do sensor XXXXX
  sensor = pulseIn(spin, HIGH);
  Max_sensor = 0;
  Min_sensor = 0:
  

  //Converte os dados do sensor para controle do LED
  //Valores convertidos para range entre 100 e 1000
  int value;
  int aux;
  aux = 1000(sensor-Min_sensor)-100(sensor-Max_sensor);
  value = aux/(Max_sensor-Min_sensor);
  
  
  //Acende e apaga o LED com tempo controlado pelo sensor
  digitalWrite(13, HIGH);   
  delay(value);              
  digitalWrite(13, LOW);    
  delay(value);         

  delay(50);  
  
}
