#include <stdio.h>
int main()
{
    int a,b,c,res;
    scanf("%d %d %d",&a,&b,&c);
    res=a;

    if (a<b || a<c)
    {
      if (b<c)
      {
          res=c;
      }else{
          res=b;
      }
      
    }

    printf("%d eh o maior\n",res);
    return 0;
    
}