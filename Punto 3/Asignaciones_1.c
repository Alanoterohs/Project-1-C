#include <stdio.h>

int main() 
{
  int x;
  printf("Toma valor x: " );
  scanf("%d", &x );
  x=5;
  printf("valor final de x:  %d\n", x );

  return 0;
}

/*
      Programa         | Usuario ingresa un σ0 | Produce una salida σ1
  1.a ejecución 1      |           1           |          5
  1.a ejecución 2      |           2           |          5
  1.a ejecución 3      |           3           |          5
*/