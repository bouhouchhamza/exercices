#include <stdio.h>
#include <stdlib.h>

int main()
{
 double KM , YA ;
 const double P=1093.63 ;
 printf("entrer la distance exprim� en Km pour convirter vers Yard : \n");
 scanf("%lf",&KM);
 YA= KM * P;
 printf("la distance exprim� en yared est: %lf",YA);

    return 0;
}
