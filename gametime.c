#include <stdio.h>

int main()
{
    int startm, endt,durationt;
    scanf("%d %d",&startm, &endt);
    durationt=endt-startm;

    if (durationt<0)
    {
        durationt=24+(endt-startm);
    }
     if (startm==endt)
    {
       printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    printf("O JOGO DUROU %d HORA(S)\n",durationt);

    return 0;
}