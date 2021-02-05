#include <stdio.h>

int main()
{
    int i,N;
    scanf("%d",&N);
    for ( i = 2; i <1000; i++)
    {
      if (i%N==2)
      {
         printf("%d\n",i);
      }
      
    }

    return 0;
    
}