#include <stdio.h>
int main()
{
    float A,B,C,Res;
    scanf("%f %f %f",&A, &B,&C);
    Res=((A/10*2)+(B/10*3)+(C/10)*5);
    printf("MEDIA = %.1f\n",Res);
    return 0;   
}