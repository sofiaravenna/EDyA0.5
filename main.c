/*Escriba una función que intercambie el valor de dos variables enteras utilizando
punteros y los muestre antes y después del intercambio por pantalla.*/

#include <stdio.h>

int main( )
{
    int x=1;
    int y=2;
    int z;

    int *pa=&x;
    int *pb=&y;

    printf("El valor de x es: %d\nEL valor de y es: %d\n",x,y);

    z=*pa;
    x=*pb;
    y=z;

    printf("El nuevo valor de x es: %d\nEl nuevo valor de y es: %d",x,y);
    return 0;
}
