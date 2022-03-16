#include <stdio.h>
#include <math.h>
#include <libmain/circle.h>
#include <libmain/treug.h>
int main()
{
    int n;
    printf ("Figura: \n1.Krug\n2.Treugolnic\n");
    scanf ("%d",&n);
    if (n==1) circle();
    if (n==2) treug();
    if ((n!=1)&&(n!=2)) printf ("ERROR\n");
    return 0;
}
 
