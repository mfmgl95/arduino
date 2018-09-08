const int Trigger = 2;
const int Echo = 3;
void setup() {
  Serial.begin(9600);
  pinMode(Trigger, OUTPUT); //pin como salida
  pinMode(Echo, INPUT); //pin como entrada
  digitalWrite(Trigger, LOW);//Inicializamos el pin con 0
}
void loop(){
  long t; //tiempo que demora en llegar el eco
  long d; //distancia en centimetros
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW);
  t = pulseIn(Echo, HIGH); //obtenemos el ancho del pulso
  d = t/59; //escalamos el tiempo a una distancia en cm
  Serial.print("Distancia: ");
  Serial.print(d); //Enviamos serialmente el valor de la distancia
  Serial.print("cm");
  Serial.println();
  delay(2000); //Hacemos una pausa de 5 segundos
}
