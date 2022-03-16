#include <stdio.h>
#include <math.h>

void circle()
{
    int r;
    float perimetr,s;
    printf ("Vedite radius:\n");
    scanf ("%d",&r);
    if (r>0)
    {
        perimetr = 3.14*2*r;
        s = 3.14*r*r;
        printf ("\nperimetr = %.2f   s = %.2f\n",perimetr, s);
    }
    else
    {
        printf("NO\n");
    }
}
