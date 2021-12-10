#include <stdio.h>

#define ABS(Value) ((Value >= 0) ? Value : -Value)


int main(void)
{
    int i;

    i = -3;
    printf("el valor de la funcion es %i", ABS(i));
    return (0);
}