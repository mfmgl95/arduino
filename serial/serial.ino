void setup() {
Serial.begin(9600);
}
void loop(){
Serial.println("Bienvenido al mundo arduino");
Serial.print("Notar la diferencia ");
Serial.print("Entre print y println");
delay(5000);
}
