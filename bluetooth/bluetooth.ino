#include <SoftwareSerial.h>

SoftwareSerial BT(10,11);// BT(Pin RX, Pin TX)eSTABLECER COUNICACION SERIAL ENTRE ARDINO Y BLUETOOH
void setup(){
Serial.begin(9600);
Serial.println("Listo");

BT.begin(38400);

//pinMode(8, OUTPUT);//Pin conectado a EN o KEY
//pinMode(9, OUTPUT);//Pin conectado a VCC
//digitalWrite(8, HIGH);//Activamos el pin EN/KEY
//digitalWrite(9, LOW);//Aseguramos que el módulo bluetooth está apagado
//delay (500) ;//Esperamos 0.5 s
//digitalWrite(9, HIGH);//Encendemos el módulo bluetooth


//Serial.println("Esperando comandos AT:");
}
void loop(){
  if (BT.available()){  // Lee BT y envía Arduino si existe informacion disponible desde el módulo    
    Serial.write(BT.read());//lee el dato que tiene ele modulo y lo escribe
  }
  if (Serial.available()){ //informacion disponible en el monintor serial y lo escribimos e bluetooh
    BT.write(Serial.read());   
  }
}
