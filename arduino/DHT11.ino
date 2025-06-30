#include <DHT.h> // é para incluir códigos a parte
DHT dht(2, DHT11); // colocamos um sensor na porta 2

void setup() {
  Serial.begin(9600); 
  // O Serial.begin(9600); começa a comunicação entre o Arduino e o computador
  dht.begin();  // Inicializa o sensor
  pinMode(9, OUTPUT) // OUTPUT é saída - INPUT é entrada
  // output é da arduino para algo - input é de algo pra arduino
}
void loop() {
  delay(2000);  // Espera 2 segundos entre as leituras de temperatura e umidade
  // Lê a temperatura e a umidade
  float umidade = dht.readHumidity(); /* essas funções já prontas estão
  dentro do código <DHT.h> - ele lê a umidade; */
  float temperatura = dht.readTemperature(); /* essas funções já prontas 
  estão dentro do código <DHT.h> - ele lê a temperatura; */
  
  // Exibe os resultados
  Serial.print("Umidade:  ");
  Serial.print(umidade);
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.print("°C");
}
