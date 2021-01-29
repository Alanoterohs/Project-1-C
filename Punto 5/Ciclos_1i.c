#include <stdio.h>

int main()
{
    //Usuario debe ingresar i -> 400
    int i;
    printf("ingrese un valor para i: ");
    scanf("%d", &i);

    while (i!=0)
    {
    printf("valor de i en cada iteración: %d\n", i);
        i = 0;
    }
    //Último valor: 0
    //Ingresa una vez al while porque luego al asignarle i=0, no le permite la condición para volver a iterar de nuevo.
    return 0;
}