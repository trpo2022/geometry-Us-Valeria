#include <stdio.h>
#include <math.h>

void treug()
{
    int a,b,c,perimetr;
    float s;
    printf ("Vedite storoni:");
    scanf ("%d %d %d",&a, &b, &c);
    if ((a>0)&&(b>0)&&(c>0))
    {
        perimetr = (a+b+c);
        s = perimetr/2*(perimetr/2-a)*(perimetr/2-b)*(perimetr/2-c);
        printf ("\nperimetr = %d   s = %.2f\n",perimetr, s);
    }
    else
    {
        printf("NO\n");
    }
}
