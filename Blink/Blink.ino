int led = 13;
int TRIG = 10;
int ECO 9;
int DURACION;
int DISTANCIA;
void setup() {
  
  pinMode(led, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECO, INPUT); 
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(TRIG, HIGH);
  delay (1);
  digitalWrite(TRIG, LOW);
  DURACION = pulseIn(ECO, HIGH);
  DISTANCA = DURACION / 58.2;
  Serial.println(DISTANCIA);
  delay (200);
  if (DISTANCIA <= 20 && DISTANICIA >= 0 ) 
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay (DISTACIA * 10);
  delay(50);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second
}
