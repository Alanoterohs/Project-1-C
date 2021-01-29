#include <stdio.h>
#include <stdbool.h>

int main()
{
    //usuario debe ingresar x-> 13, y-> 3 i-> 0
    int x,y,i;
    printf("ingrese un valor para x: ");
    scanf("%d", &x);
    printf("ingrese un valor para y: ");
    scanf("%d", &y);
    printf("ingrese un valor para i: ");
    scanf("%d", &i);

    i=0;

    while (x >= y)
    {
    x = x - y;
    i = i + 1;
    printf("valor de x-> %d, y->%d i->%d  luego de cada iteración\n", x,y,i);

  /*valor de x-> 10, y->3 i->1  luego de cada iteración
    valor de x-> 7, y->3 i->2  luego de cada iteración
    valor de x-> 4, y->3 i->3  luego de cada iteración
    valor de x-> 1, y->3 i->4  luego de cada iteración*/
    }
    
    return 0;
}