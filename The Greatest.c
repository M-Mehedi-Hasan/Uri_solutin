#include <stdio.h>

int main()
{
    int a ,b,abs,result;
    scanf("%d %d %d",&a,&b,&abs);
    result=(a+b+abs*(a-b))/2;
    printf("%d eh o maior",result);
    return 0;
}