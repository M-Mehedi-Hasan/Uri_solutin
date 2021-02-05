#include <stdio.h>
int main()
{
    int n,m,i,j=0;
    scanf("%d %d",&n,&m);
    for(i=1; i<=m; i++ ){
        
        j++;
        if (j==n)
        {
           printf("%d",i);
        }
        else{
            printf("%d ",i);
        }

        if (j==n)
        {
            j=0;
           printf("\n");
        }
        
        
        
  
    }
}