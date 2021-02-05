#include <stdio.h>
int main()
{
    int currentpass,setpass=2002;
    while (1)
    {
       scanf("%d",&currentpass);
       if (currentpass==setpass)
       {
          printf("Acesso Permitido\n");
          break;
       }
       else
       {
           printf("Senha Invalida\n");
       }
       
       
    }
    return 0;

}