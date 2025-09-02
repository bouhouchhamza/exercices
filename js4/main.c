#include <stdio.h>
#include <stdlib.h>

int main()
{
   float A , B , C , moyen ;
   printf("veuiller entrer le coefficient 2:");
   scanf(" %f", &A);
   printf("veuiller entrer le ceofficient 3:");
   scanf(" %f", &B);
   printf("veuiller entrer le ceofficient 5:");
   scanf(" %f", &C);
   moyen = ((A*2) +(B*3) + (C*5)) / (2+3+5) ;
   printf("votre moyen est : %2.f",moyen);
    return 0;
}
