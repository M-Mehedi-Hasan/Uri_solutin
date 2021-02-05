#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);

    if (a<b)
    {
        for(c=a+1; c<b; c++){
           if (c%5==2 || c%5==3)
           {
               printf("%d\n",c);
           }
           
        }
    }

    if (a>b)
    {
        for(d=b+1; d<a; d++){
            if (d%5==2 || d%5==3)
            {
               printf("%d\n",d);
            }
            
        }
    }
    

    return 0;
    
}