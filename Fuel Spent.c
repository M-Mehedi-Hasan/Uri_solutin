#include <stdio.h>

int main()
{
    float km,hour,result;
    scanf("%f %f",&km,&hour);
    result=km*hour/12;
    printf("%.3f\n",result);
}