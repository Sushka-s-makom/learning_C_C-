#include <stdio.h>

typedef enum {
    coord_int = 1,
    coord_double = 2
} TYPE_COORD;

typedef union {
    int coord_i;
    double coord_d;
} COORD;

typedef struct {
    COORD x;
    COORD y;
    TYPE_COORD type;
} POINT2;

int main(void)
{
    POINT2 pt;
    int coord;

    scanf("%d", &coord);

    if (coord == coord_int) {
        scanf("%d %d", &pt.x.coord_i, &pt.y.coord_i);
        pt.type = coord_int;
    }
    else {
        scanf("%lf %lf", &pt.x.coord_d, &pt.y.coord_d);
        pt.type = coord_double;
    }

  
    return 0;
}


