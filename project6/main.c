#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A , B , RE ;
    char OP ;
 printf("veuiller entrer la valeur de A :");
 scanf(" %f", &A);
 printf("veuiller entrer la valeur de B :");
 scanf(" %f", &B);
 printf("veuiller entre l'operation :") ;
 scanf(" %c", &OP);
 switch(OP){
 case'+':
    RE = A + B;
    printf("le resultat est : %2.f",RE);
    break;
 case'-':
    RE = A - B;
    printf("le résultat de soustraction est : %2.f",RE);
    break;
 case'*':
    RE = A * B;
    printf("le résultat de de multiplication est : %2.f",RE);
    break;

case'/':
    if(RE!=0){
    printf("le résultat de division est : %2.f",RE);
    break;
    } else{
        printf("Erreur : division par zéro impossible.\n");
        break;
 }

 }
    return 0;
}
