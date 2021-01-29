#include <stdio.h>

int pedirEntero(void) {
  int x;
  printf("Ingrese un entero x: ");
  scanf("%d", &x );
  return x;
}

void imprimeEntero() {
  printf("Retorna: %d\n", pedirEntero());
}

int main() {
  imprimeEntero();
  return 0;
}