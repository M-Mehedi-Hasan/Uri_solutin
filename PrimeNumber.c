#include <stdio.h>
int main()
{
    int i,n,m,j,count=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&m);
        for(j=1,count=0; j<m; j++){
        if (m%j==0)
        {
           count+=j;
    
        }
        }
        if (count==1)
        {
            printf("%d eh primo\n",m);
        }
        else{
            printf("%d nao eh primo\n",m);
        }
        
    }

    return 0;
}