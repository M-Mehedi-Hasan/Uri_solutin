#include <stdio.h>

int main(){
    float result1 , result2,total;
    float product1,productUint1,productPrice1,product2,productUnit2, productPrice2;
    scanf("%f %f %f %f %f %f",&product1, &productUint1,&productPrice1, &product2,&productUnit2,&productPrice2 );
    
    result1=productUint1*productPrice1;
    result2= productPrice2*productUnit2;
    total=result1+result2;
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;


}