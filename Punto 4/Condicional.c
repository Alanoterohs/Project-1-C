#include <stdio.h>

int main()
{

    // (x→ 5 , y→ 4 , z→ 8 , m→ 0 )
    int x,y,z,m;
    printf("Ingrese un valor para x: ");
    scanf("%d", &x);
    printf("Ingrese un valor para y: ");
    scanf("%d", &y);
    printf("Ingrese un valor para z: ");
    scanf("%d", &z);
    printf("Ingrese un valor para m: ");
    scanf("%d", &m);
    if (x < y)
    {
        m=x;
    } else if ( x >= y)
    {
        m=y;
    }
    printf("el valor final del primer programa en m: %d \n", m);
    //Resultado de los estados finales:
    // (x→ 5 , y→ 4 , z→ 8 , m→ 4 )

    if (m < z)
    {
        ;
    } else if (m >= z)
    {
        m=z;
    }
    printf("el valor final del segundo programa en m: %d \n", m);
        //Resultado de los estados finales:
    // (x→ 5 , y→ 4 , z→ 8 , m→ 4 ), queda igual porque no se realizan asignaciones en el condicional de (m<z)
    

    return 0;
}