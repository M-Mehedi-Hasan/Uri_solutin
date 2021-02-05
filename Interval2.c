#include <stdio.h>
int main()
{
    int i,n,r,out=0,in=0;
        scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&r);
        if (r<=20 && r>=10)
        {
           in++;
        }
        else{
            out++;
        }
        
    }

    printf("%d in\n",in);
    printf("%d out\n",out);

    return 0;
}