#include <stdio.h>
#include <math.h>
int main()
{
    double x1,x2,y1,y2,result,Distance;
    scanf("%lf %lf\n",&x1,&x2);
    scanf("%lf %lf",&y1 , &y2);
    result=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    Distance=sqrt(result);

    printf("%lf",result);

}