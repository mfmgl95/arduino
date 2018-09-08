//Creamos una variable byte_rx de tip
char byte_rx;
void setup() {
  Serial.begin(9600);
}
void loop(){
  //Serial.available devuelve el número de bytes que han sido recibidos
  //desde el terminal.
  if(Serial.available()>0){
    byte_rx=Serial.read();
    Serial.print(byte_rx);
  }
}
