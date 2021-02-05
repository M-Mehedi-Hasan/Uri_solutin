#include <stdio.h>

int main()
{
    float n;
    int i;
    int r=0;
    for(i=1; i<=6; i++){
        scanf("%f",&n);
        if (n>0)
        {
            r++;
        }
        

    }
    printf("%d valores positivos\n",r);

    return 0;
}