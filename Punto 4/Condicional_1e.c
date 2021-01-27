#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int x,y;    
    printf("Ingrese un valor para x: ");
    scanf("%d", &x);
    printf("Ingrese un valor para y: ");
    scanf("%d", &y);

    if (x >= y)
    {
        x = 0;
    }  else if (x <= y)
    {
        x = 2;
    }
    printf("valor final de x: %d \n", x);
    

    return 0;
}