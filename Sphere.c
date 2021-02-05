#include <stdio.h>
int main()
{
    double sphere,pi,VOLUME ;
    double R ,x,y=3;
    scanf("%lf",&R);
    x=pow(R,y);
    pi=3.14159;
    sphere=4.0/3;
    VOLUME=sphere*pi*x;
    printf("VOLUME = %.3lf\n",VOLUME);
    
   return 0;
}