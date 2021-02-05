#include <stdio.h>

int main()
{
    int i,n,sqr=2;
    scanf("%d",&n);
    for ( i = 1; i<=n; i++)
    {
       if (i%2==0)
       {
         printf("%d^%d = %d\n",i,sqr,i*i);
       }
       
    }
    return 0;
    
}