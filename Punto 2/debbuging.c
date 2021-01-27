#include <stdio.h>
#include <stdbool.h>

int main() 
{

int x,y,z,b,w;

/* La primer expresion debe tener su variable x-> 4 para que la expresion sea True*/

printf("x tomará el valor: ");
scanf("%d", &x);

if (x % 4 == 0) {
 printf("%d\n", true);
} else {
   printf("%d\n", false );
}

printf("y tomará el valor: ");
scanf("%d", &y );
printf("z tomará el valor: ");
scanf("%d", &z );




/*  La segunda expresion debe tener x-> 4, y-> -4, z-> 8  para que quede True o 1*/

if (x + y == 0 && y + (-x) == (-1) * z) {
  printf("%d\n", true );
} else {
  printf("%d\n", false );
}

/*  La tercera expresion debe tener b-> 1(true), w-> 1(true),  para que quede False o 0*/

    printf("b tomará el valor: ");
    scanf("%d", &b );
    printf("w tomará el valor: " );
    scanf("%d", &w );
    printf("resultado = %d\n", ! b && w );

  return 0;
}