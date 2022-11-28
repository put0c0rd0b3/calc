#include <stdio.h>
float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);

int main() {
  printf  ("_______ _______        _______ _     _        _______ ______   _____   ______ _______"
           "|       |_____| |      |       |     | |      |_____| |     / |     | |_____/ |_____| "
           "|_____  |     | |_____ |_____  |_____| |_____ |     | |_____/ |_____| |    /_ |     |");
  float a, b;
  scanf("%f%f", &a, &b);

}
float suma(float a, float b) {
  float resultado = a + b;
  printf("%f\n", resultado);
  return resultado;
}
float resta(float a, float b) {
  float resultado = a - b;
  printf("%f\n", resultado);
  return resultado;
}
float multiplicacion(float a, float b) {
  float resultado = a * b;
  printf("%f\n", resultado);
  return resultado;
}
float division(float a, float b) {
  float resultado = a / b;
  printf("%f\n", resultado);
  return resultado;
}
