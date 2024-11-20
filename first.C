#include<stdio.h>
typedef struct {
    char nom[50];
    int age;
   Adresse adresse;

}personne;

typedef struct {
    char rue[50];
    char ville[50];
    char codepostale[50];
    
} Adresse;

personne pers;
void creerpersonne(){
   printf("entrer le nom:");
scanf ("%s",pers.nom);
printf ("%d",&pers.age); 
}


