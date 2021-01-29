#include <stdio.h>
#include <stdbool.h>

int main()
{
    //usuario debe ingresar x-> 5, i-> 0 res-> false o 0
    int x,i,res;
    printf("ingrese un valor para x: ");
    scanf("%d", &x);
    printf("ingrese un valor para i: ");
    scanf("%d", &i);
    printf("ingrese un valor para res: ");
    scanf("%d", &res);

    i=2;
    res=true;

    while (i < x && res)
    {
    res = res && (x % i !=0);
    i = i+1;
    printf("valor de x-> %d, i->%d res->%d  luego de cada iteración\n", x,i,res);

    /*
    valor de x-> 5, i->3 res->1  luego de cada iteración
    valor de x-> 5, i->4 res->1  luego de cada iteración
    valor de x-> 5, i->5 res->1  luego de cada iteración
    */
    }
    return 0;
    
}