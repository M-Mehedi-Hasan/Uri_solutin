#include <stdio.h>
int main()
{
    int i,n,r;
     scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&r);
        if (r%2==0)
        {
            printf("%d eh perfeito\n",r);
        }
        else{
            printf("%d nao eh perfeito\n",r);
        }
        
    }
    return 0;
}