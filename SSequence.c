#include <stdio.h>
int main()
{
    double i,sum=0,n;
    for ( i = 1; i <=100; i++)
    {
       n=1/i;
       sum=sum+n;
    }

    printf("%.2lf\n",sum);
    
    return 0;
}