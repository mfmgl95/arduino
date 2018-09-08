// Inclusión de librerías
#include <OneWire.h>
#include <DallasTemperature.h>

/********************************************************************/
// Se define que el cable de datos del sensors (DATA) será puesto en el pin 2
#define ONE_WIRE_BUS 2
/********************************************************************/
// Crea una variable oneWire para la comunicación
OneWire oneWire(ONE_WIRE_BUS);
/********************************************************************/
// Pasa la variable oneWire a la variable sensors.
DallasTemperature sensors(&oneWire);
/********************************************************************/
void setup(){
// start serial port
Serial.begin(9600);
Serial.println("Muestra periodicamente la lectura de un sensor de temperatura");
// Inicia la librería
sensors.begin();
}
void loop() {
// Llama a la función .requestTemperatures() la cual
int numSensores = sensors.getDeviceCount();
Serial.print("Hay ");
Serial.print(numSensores);
Serial.print(" sensores conectados ");
/********************************************************************/
sensors.requestTemperatures(); // Envía el comando para obtener la lectura de las temperaturas
/********************************************************************/
Serial.print("Temperatura es: ");
Serial.println(sensors.getTempCByIndex(0)); //Si hay n sensores, se puede mostrar desde el sensor 0 hasta el
//n-1
delay(1000);
}
