/*
   

 */
 
 //Inicialize reading variable
 int sensor = A0;
 
 //Variable declaration which place sensor values
 int valor;


void setup() {
  // Inicialize serial comunication
  Serial.begin(9600);
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  
}

void loop() {  

  //Reads the sensor values
  valor = analogRead(sensor);
  
  Serial.print("Valor:");
  Serial.println(valor);
  

  /*Converte os dados do sensor para controle do LED
  /Valores convertidos para range entre 100 e 1000
  int value;
  int aux;
  aux = 1000(sensor-Min_sensor)-100(sensor-Max_sensor);
  value = aux/(Max_sensor-Min_sensor);
  */
  
  //Implementation of raange control
  int distancia = map(valor,0,1023,0,2);
  
  //3 possible states
  switch (distancia) {

case 0:

digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);

break;

case 1:

digitalWrite(LED_BUILTIN, HIGH);
  delay(750);
  digitalWrite(LED_BUILTIN, LOW);
  delay(750);

break;

case 2:

digitalWrite(LED_BUILTIN, HIGH);
  delay(350);
  digitalWrite(LED_BUILTIN, LOW);
  delay(350);

break;

default:
  digitalWrite(LED_BUILTIN, LOW);

break;
  
}
}
