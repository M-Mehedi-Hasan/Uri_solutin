#include <stdio.h>
int main()
{
    int i;
    double N[100],a;
    scanf("%lf",&a);
   for(i=0; i<100; i++){
       printf("N[%d] = %.4lf\n",i,a);
       a=a/2.00;
   }

   return 0;
}