#include <stdio.h>
int main()
{
    int n,hour,mints ;
    scanf("%d",&n);

    hour=n/3600;
    n=n-(hour*3600);

    mints=n/60;
    n=n-(mints*60);

    printf("%d:%d:%d\n",hour,mints,n);

    return 0;
   
}