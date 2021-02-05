#include <stdio.h>
int main()
{
    int durationhour, durationminute,starthour,endhour,startminute,endminute;
    scanf("%d %d %d %d",&starthour,&startminute,&endhour,&endminute);
    durationhour=endhour-starthour;

    if (durationhour<0)
    {
        durationhour=24+(endhour-starthour);

    }
        durationminute=endminute-startminute;
    if (  durationminute<0)
    {
         durationminute=60+(endminute-startminute);
             durationhour--;
    }


    if (starthour==endhour &&startminute == endminute)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",durationhour,durationminute);
    }
    return 0;
    
    
    
}