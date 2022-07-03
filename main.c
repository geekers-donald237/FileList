#include<stdio.h>
#include<stdlib.h>
#include "file.h"

int main()
{

    int x,n,i,p;
    int choix;
    int contin;


   do{

    printf("\n\t\t\t-->Implémentation d'une file avec des listes chaines\n");
    printf("Pour toutes operations veuillez d'abord effectue une enfilation\n");
    printf("\n1--> Enfiler \n2--> Défiler \n3--> Afficher le dernier elemt  de la file \n4--> Afficher le premier elemt  de la file \n5--> Verifier si une pile est vide \n6--> Vider la file");
    printf("\nVotre choix: ");
    scanf("%d", &choix);
    if(choix == 1){
        printf("entrer le nombre d'elements a enfiler\n");
        scanf("%d",&n);
        for(i = 1;i<=n ;i++){
            printf("\nEnter L'élément à empiler: \n");
            scanf("%d", &x);
            Enfiler(x);
            printf("la nouvelle file  est : \n");
            Afficher();
            printf("\n");
        }
    }else if (choix == 2){
        printf("entrer le nombre d'elements a defiler\n");
        scanf("%d",&n);
        for(i = 1;i<=n ;i++){
            Defiler();
            printf("Apres depilation: \n");
            Afficher();
            printf("\n");
        }    
    }else if(choix == 3){
        x=file_last();
        printf("le dernier element de la file est : %d\n",x);
    }else if(choix == 4){
        x=file_first();
        printf("le premier element de la file est : %d\n",x);
        
    }else if(choix == 5){
        if(file_vide() == 1){
            printf("La file est Vide rien a faire\n");
        }else{
            printf("votre file n'est pas vide \n");
        }
    }else if(choix == 6){
        vider_file();
        Afficher();    
    }else {
        printf("CHOIX NON DISPONIBLE\n");
    }
    printf("\t\t\t--> Voulez vous continuer la partie ?\n--> Tapez 0(Non) ou 1(Oui)\n ");
    scanf("%d",&contin);
    }while(contin);


    return 0;        
}
