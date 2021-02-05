#include <stdio.h>

int main(){
    float month,hour,SALARY;
    int NUMBER;

    scanf("%d %f %f",&NUMBER, &month, &hour);
    SALARY=month*hour;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);

    return 0;

}