#include <stdio.h>
int main()
{
    int i, n,m;
    scanf("%d",&n);
    int x[n];

    for(i=0; i<n; i++){
        scanf("%d",&x[i]);
    }
        int  min=x[0];
    for(i=0; i<n; i++){
        if (min>x[i])
        {
            min=x[i];
            m=i;
        }  
    }
    printf("Menor valor: %d\nPosicao: %d",min,m);


    return 0;
}