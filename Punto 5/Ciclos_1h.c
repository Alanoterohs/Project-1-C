#include <stdio.h>

int main()
{   
    //Usuario debe colocar i -> 4
    int i;
    printf("ingrese un valor para i: ");
    scanf("%d", &i);

    while (i!=0)
    {
    printf("valor de i en cada iteración: %d\n", i);
        i = i-1;
    }
    //Último valor: 0
    return 0;
}