#include <stdio.h>

int main() {
  int x, y;
  printf("toma el valor y = ");
  scanf("%d", &y );
  printf("toma el valor x = ");
  scanf("%d", &x );
  y = y + y;
  printf("Retorna el valor final y = %d\n", y );
  x = x + y;
  printf("Retorna el valor final x = %d\n", x );
  return 0;
}


/*
      Programa         |    Usuario ingresa   |  Produce una salida
  1.b ejecución 1      |    x -> 2   y -> 5   |    y = 10   x = 12
  1.b ejecución 2      |    x -> 3   y -> 6   |    y = 12   x = 15
  1.b ejecución 3      |    x -> 4   y -> 7   |    y = 14   x = 18
*/