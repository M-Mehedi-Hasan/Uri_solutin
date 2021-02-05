#include <stdio.h>

int main(){
    double seller,bonus,total,bonuscalculate;
    char str;
    
    scanf("%s %lf %lf", &str,&seller, &bonus);

    bonuscalculate=(bonus*15)/100;
    total=bonuscalculate+seller;

    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
    
}