#include <stdio.h>
int main()
{
    printf("Input n\n");
    int n,fac;
    scanf("%d",&n);
    fac=1;
    for (int i=1; i<=n; i++)
    {
        fac*=i;
    }
    printf("Factorial=%d", fac);
}
