// programa de los semaforos 
// Definir los pines a los que están conectados los LEDs
int ledPins[] = {2, 3, 4}; // Cambia los números de pin si están conectados a otros pines

void setup() {
  // Configurar los pines como salidas
  for (int i = 0; i < 3; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Encender y apagar los LEDs en un bucle
  for (int i = 0; i < 3; i++) {
    if (i != 1) {
      digitalWrite(ledPins[i], HIGH); // Encender led rojo
      delay(1000); // Esperar 1 seg
      digitalWrite(ledPins[i], LOW); // Apagar el LED rojo
      digitalWrite(ledPins[i+1], HIGH);// Encender led amarillo
      delay(500);  // Mantener la luz amarilla durante 0.5 segundos 
      digitalWrite(ledPins[i+1], LOW); // Apagar el LED amarillo
      digitalWrite(ledPins[i+2], HIGH);// Encender led verde
      delay(1000);  // Mantener la luz verde durante 1 segundos
      digitalWrite(ledPins[i+2], LOW); // Apagar el LED verde
      digitalWrite(ledPins[i+1], HIGH);// Encender led amarillo
      delay(500);  // Mantener la luz amarilla durante 0.5 segundo
      digitalWrite(ledPins[i+1], LOW);// Apagar el LED amarillo
      digitalWrite(ledPins[i], HIGH);// Apagar el LED rojo
    }
    else
    {
      i = 0;
      break;
    }
  } 
}







  

