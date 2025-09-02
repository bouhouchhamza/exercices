#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double A , B , C , moyen ;
    printf("veuiller entrer la valeur de A :");
    scanf(" %lf", &A);
    printf("veuiller entrer la valeur de B :");
    scanf(" %lf", &B);
    printf("veuiller entrer la valeur de C :");
    scanf(" %lf", &C);
    moyen = cbrt(A * B * C);
    printf("le moyen géométrique de troi nombre est : %4.f",moyen);


    return 0;
}
