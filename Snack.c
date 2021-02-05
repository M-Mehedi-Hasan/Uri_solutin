#include <stdio.h>

int main()
{
    float x,y;
    scanf("%f %f", &x, &y);
    if (x==1)
    {
        x=4.00;
    }
    else if (x==2)
    {
        x=4.50;
    }

    else if(x==3){
        x=5.00;
    }
    else if (x==4)
    {
        x=2.00;
    }

    else if (x==5)
    {
        x=1.50;
    }
    float sum=x*y;
    printf("Total: R$ %.2f\n",sum);
    
    return 0;

}