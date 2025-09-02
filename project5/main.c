#include <stdio.h>
#include <stdlib.h>

int main()
{ int T ;
printf("veuiler entre la température de l'eau :");
scanf("%d",&T);
if(T<0)
   printf("l'etat de l'eau est Solide");
else if(0<=T && T<100)
    printf("l'etat de l'eau est liquide");

else
    printf("l'etat de l'eau est gazeux");
    return 0;
}
