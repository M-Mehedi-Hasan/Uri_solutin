#include <stdio.h>
int main()
{
    int i,n,l=6;

    scanf("%d",&n);
    for(i=n; i<=n+(l*2); i++){
        if (i%2==1)
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
}