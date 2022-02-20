#include <stdio.h>
#include <math.h>

int main ()
{
    int n,r,a,b,c;
    float perimetr, s;
    printf ("Figura: \n1.Krug\n2.Treugolnic\n");
    scanf ("%d",&n);
    switch(n)
    {
        case 1:
        printf ("Vedite radius:\n");
        scanf ("%d",&r);
        perimetr = 3.14*2*r;
        s = 3.14*r*r;
        printf ("\nperimetr = %.2f   s = %.2f\n",perimetr, s);
        break;
        case 2:
        printf ("Vedite storoni:");
        scanf ("%d %d %d",&a, &b, &c);
        perimetr = (a+b+c);
        s = sqrt(perimetr/2*(perimetr/2-a)*(perimetr/2-b)*(perimetr/2-c));
        printf ("\nperimetr = %.2f   s = %.2f\n",perimetr, s);
        break;
        default:
        printf("\nERROR\n");

    }
    return 0;
}
 