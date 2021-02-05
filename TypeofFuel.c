#include <stdio.h>
int main() {
   int n,a,b,c;
    a = b = c = 0;
    while(1)
    {
        scanf("%d",&n);
             if(n==4)
                break;
        else if(n==1)
          a++;
        else if(n==2)
            b++;
        else if(n==3)
            c++;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,b,c);
    return 0;
}