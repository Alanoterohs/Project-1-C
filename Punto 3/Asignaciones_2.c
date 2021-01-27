#include <stdio.h>

int main() {
  int x,y;
  printf("Toma valor x:  " );
  scanf("%d", &x );
  printf("Toma valor y:  " );
  scanf("%d", &y );
  x = x + y;
  printf("valor final de x:  %d\n", x );
  y = y + y;
  printf("valor final de y:  %d\n", y );
  
  return 0;
}


/*
      Programa         | Usuario ingresa un σ0  | Produce una salida σ1
  1.b ejecución 1      |       x -> 2   y -> 5  |    x = 7   y = 10
  1.b ejecución 2      |       x -> 3   y -> 6  |    x = 9   y = 12
  1.b ejecución 3      |       x -> 4   y -> 7  |    x = 11   y = 14
*/