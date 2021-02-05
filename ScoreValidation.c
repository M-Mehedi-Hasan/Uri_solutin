#include <stdio.h>
int main()
{
  float a,sum=0,result;
  int count=0;
  while (1)
  {
         if (count==2)
    {
        break;
    }
     scanf("%f",&a);
 
    
     if (a>=0.0 && a<=10.0)
     {
           count++;
         sum=sum+a;
       
     }
     else{
         printf("nota invalida\n");
     }
     
  }
    result=sum/2;
    printf("media = %.2f\n",result);

  return 0;
    
}