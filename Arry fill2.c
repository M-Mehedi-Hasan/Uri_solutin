#include <stdio.h>
int main()
{
    int i,j,k,T[1000];
    scanf("%d",&k);
    for(i=0, j=0; i<1000; i++){
        printf("N[%d] = %d\n",i,j);
            j++;
        if (j==k)
        {
           j=0;
        }
        
        
    }
}