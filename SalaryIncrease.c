#include <stdio.h>
int main()
{
    float mysalary,calculation;
    scanf("%f",&mysalary);
    printf("Novo salario: %.2f\n",mysalary);
    if (mysalary>0 && mysalary<=400)
    {
        calculation=mysalary*15/100;
        printf("Reajuste ganho: %.2f\n",calculation);
        printf("Em percentual: 15 %%\n");
    }

   else if (mysalary>400.01 && mysalary<=800.00)
    {
        calculation=mysalary*12/100;
        printf("Reajuste ganho: %.2f\n",calculation);
        printf("Em percentual: 12 %%\n");
        
    }

  else if (mysalary>800.01 && mysalary<=1200.00)
    {
        calculation=mysalary*10/100;
        printf("Reajuste ganho: %.2f\n",calculation);
        printf("Em percentual: 10 %%\n");
        
    }

   else if (mysalary>1200.01 && mysalary<=2000.00)
    {
        calculation=mysalary*7/100;
        printf("Reajuste ganho: %.2f\n",calculation);
        printf("Em percentual: 7 %%\n");
        
    }

    else 
    {
          calculation=mysalary*4/100;
        printf("Reajuste ganho: %.2f\n",calculation);
        printf("Em percentual: 4 %%\n");
    }
    


    return 0;
    
    

}