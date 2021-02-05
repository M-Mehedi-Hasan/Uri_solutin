#include <stdio.h>
int main()
{   
 
    int x,n,y,sum=0;
    scanf("%d %d",&n,&y);
    for (x=n; x <=y; x++)
    {
    if (x%13==0)
    {
        continue;
     
    }
    else{
        sum+=x;
    }
    
    }
    printf("%d\n",sum);

    return 0;
    
}