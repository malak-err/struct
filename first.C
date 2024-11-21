#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char rue[50];
    char ville[50];
    int codepostale;
} Adresse;

typedef struct {
    char nom[50];
    int age;
    Adresse adresse;
} Personne;

Personne pers;

void creerpersonne(){
    printf("Entrer le nom : ");
    scanf("%s", pers.nom);
    printf("Entrer l'âge : ");
    scanf("%d", &pers.age);
    printf("Entrer la rue : ");
    scanf("%s", pers.adresse.rue);
    printf("Entrer la ville : ");
    scanf("%s", pers.adresse.ville);
    printf("Entrer le code postal : ");
    scanf("%d", &pers.adresse.codepostale);
}

void afficherlespersonnes(Personne pers){
    printf("Nom : %s\n", pers.nom);
    printf("Âge : %d\n", pers.age);
    printf("Rue : %s\n", pers.adresse.rue);
    printf("Ville : %s\n", pers.adresse.ville);
    printf("Le code postal : %d\n", pers.adresse.codepostale);
}

void supprimerpersonne(){ 
char nom[50]; 
printf("Entrer le nom de la personne à supprimer : ");
scanf("%s", nom);
int found = 0;
for (int i = 0; i < nombrePersonnes; i++){
if (strcmp(personnes[i].nom, nom) == 0) {
found = 1; for (int j = i; j < nombrePersonnes - 1; j++) { 
personnes[j] = personnes[j + 1]; } nombrePersonnes--; 
printf("Personne supprimée avec succès.\n"); 
break;
}
} if (!found) { printf("Personne non trouvée.\n"); 
}
}
int main (){
    int choix;
    do {
        printf("1 : créer une personne\n");
        printf("2 : afficher la personne\n");
        printf("3 : quitter\n");
        printf("Entrer votre choix : ");
        scanf("%d", &choix);
        switch(choix){
            case 1:
                creerpersonne();
                break;
            case 2:
                afficherlespersonnes(pers);
                break;
            case 3:
                printf("Au revoir\n");
                break;
            default:
                printf("Choix invalide\n");
                break;
        }
    } while (choix != 3);
    return 0;
}
