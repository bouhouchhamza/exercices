#include <stdio.h>
#include <stdlib.h>

int main()
{
   char nom[50] ;
    char prenom[50] ;
    int age ;
    char sexe[50] ;
    char email_adresse [100];
    printf("veuiller entre votre nom :");
    scanf(" %s", &nom);
    printf("veuiller entre votre prénom :");
    scanf(" %s", &prenom);
    printf("veuiller entrer votre age :");
    scanf(" %d", &age);
    printf("veuiller entre votre sexe :");
    scanf(" %s", &sexe);
    printf("veuiller entre votre adresse email :");
    scanf(" %s", &email_adresse);
    printf("name est: %s \n",nom );
    printf("prenom est: %s \n",prenom);
    printf("age est: %d \n",age);
    printf("sexe est: %s \n",sexe);
    printf("adresse email est: %s \n",email_adresse);



    return 0;
}
