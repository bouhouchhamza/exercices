#include <stdio.h>
#include <stdlib.h>

int main()
{
  float K , C ;
  const float P=273.15;
  printf("veuiller entrer le degre� celsius :\n");
  scanf("%f", &C);
  K = C + P ;
  printf("le degre� kelvin est : %f",K);


    return 0;
}
