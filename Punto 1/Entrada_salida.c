#include <stdio.h>

int main() 
{
    int x,y,z;
    printf("Ingrese un valor para x: ");
    scanf("%d", &x);
    printf("Ingrese un valor para y: ");
    scanf("%d", &y);
    printf("Ingrese un valor para z: ");
    scanf("%d", &z);


    //Primera parte del cuadro con sus valores indicados
    printf("valor para primer cuadro de la primer cuadricula:  %d \n", x+y+1);
    printf("valor para primer cuadro de la segunda cuadricula:  %d \n", z*z + y*45 - 15*x);
    printf("valor para primer cuadro de la tercera cuadricula:  %d \n", y - 2 == (x*3 + 1) % 5);
    printf("valor para primer cuadro de la cuarta cuadricula:  %d \n", y/2*x);
    printf("valor para primer cuadro de la quinta cuadricula: %d \n", y < x * z);

    //Segunda parte del cuadro con sus valores indicados

    printf("Ingrese un valor para x: ");
    scanf("%d", &x);
    printf("Ingrese un valor para y: ");
    scanf("%d", &y);
    printf("Ingrese un valor para z: ");
    scanf("%d", &z);

    printf("valor para segundo cuadro de la primer cuadricula:  %d \n", x+y+1);
    printf("valor para segundo cuadro de la segunda cuadricula:  %d \n", z*z + y*45 - 15*x);
    printf("valor para segundo cuadro de la tercera cuadricula:  %d \n", y - 2 == (x*3 + 1) % 5);
    printf("valor para segundo cuadro de la cuarta cuadricula:  %d \n", y/2*x);
    printf("valor para segundo cuadro de la quinta cuadricula:  %d \n", y < x * z);

    return 0;
}