#include <stdio.h>
int main()
{
    int i,n;
    double a,b,c,res;
     scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%lf",&a);
        scanf("%lf",&b);
        scanf("%lf",&c);

      res=(((a/10)*2)+((b/10)*3)+((c/10)*5));
                 printf("%.1lf\n",res);
    }
    return 0;

}