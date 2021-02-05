#include <stdio.h>
int main()
{
    float n,count=0,sum=0;
    while (1)
    {
       scanf("%f",&n);
    if (n<0)
    {
       break;
    }
    if (0<n)
    {
       sum=sum+n;
       count++;
    }
    
    }
   float result=sum/count;
   printf("%.2f\n",result);
   
    return 0;
}