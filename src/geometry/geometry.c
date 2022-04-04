#include "libgeo/check.c"
#include <math.h>
#include <stdio.h>

int main()
{
    float x0, y0, r;
    float x1, y1, x2, y2, x3, y3;
    printf("circle: x0, y0, r ");
    scanf("%f %f %f", &x0, &y0, &r);
    printf("treug: x1, y1 ");
    scanf("%f %f ", &x1, &y1);
    printf("treug: x2, y2 ");
    scanf("%f %f ", &x2, &y2);
    printf("treug: x3, y3 ");
    scanf("%f %f", &x3, &y3);
    if ((r > 0) && (x1 != x2) && (x2 != x3) && (x1 != x3) && (y1 != y2)
        && (y2 != y3) && (y1 != y3)) {
        check(x0, y0, r, x1, y1, x2, y2, x3, y3);
    } else {
        printf("No");
    }
    return 0;
}
