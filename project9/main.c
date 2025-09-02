#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float X1 , Y1 , Z1 ;
    float X2 , Y2 , Z2 ;
    float distance ;
    printf("veuiller entrer la valeur de X1 : ");
    scanf(" %f", &X1);
    printf("veuiller entrer la valeur de Y1 : ");
    scanf(" %f", &Y1);
    printf("veuiller entrer la valeur de Z1 : ");
    scanf(" %f", &Z1);
    printf("veuiller entrer la valeur de X2 : ");
    scanf(" %f", &X2);
    printf("veuiller entrer la valeur de Y2 : ");
    scanf(" %f", &Y2);
    printf("veuiller entrer la valeur de Z2 : ");
    scanf(" %f", &Z2);
    distance = sqrt(pow((X2-X1),2)+pow((Y2-Y1),2)+pow((Z2-Z1),2));
    printf("la distance euclidienne est : %2.f",distance);


  return 0;
}
