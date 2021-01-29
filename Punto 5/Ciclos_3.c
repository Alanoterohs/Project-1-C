
#include <stdio.h>

int main() 
{
  int x,y,i;
  printf("x tomará el valor: "); /* x->15 */
  scanf("%d", &x );
  printf("y tomará el valor: "); /* y->5 */
  scanf("%d", &y );
  printf("i tomará el valor: "); /* i->3 */
  scanf("%d", &i );

  while (x >= y) 
 {
    x = x - y;
    i = i + 1;
    printf("valor de x-> %d, y->%d i->%d  luego de cada iteración\n", x,y,i);

 }
return 0;
}
/*
valor de x-> 10, y->5 i->4  luego de cada iteración
valor de x-> 5, y->5 i->5  luego de cada iteración
valor de x-> 0, y->5 i->6  luego de cada iteración
*/