#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
    point->x = 44;
    point->y = 21;
}

int main(void)
{
    t_point point;
    set_point(&point);
    printf("salida de las variables x e y: %i, %i", point.x, point.y);
    return (0);
}


// Solucion
// #ifndef __FT_POINT_H__

// #define __FT_POINT_H__

// typedef struct s_point
// {
// 	int x;
// 	int y;
// }	t_point;

// #endif