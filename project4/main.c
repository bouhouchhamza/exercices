#include <stdio.h>
#include <stdlib.h>

int main()
{
float M_S , km_h ;
printf("entrer le vitesse en KM/h : ");
scanf("%f",&km_h);
M_S= km_h * 0.27778;
printf("le vitesse en M/S est : %.2f",M_S);

    return 0;
}
