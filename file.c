#include<stdio.h>
#include<stdlib.h>
#include "file.h"


int file_vide(void)
{
    if(first == NULL && last == NULL)
       return 1;
    else 
        return 0;     
}


int file_length(void)
{   
    int nb_element=0;
    return nb_element;
}


int file_first(void)
{
    if(file_vide())
        exit(1);
    return first->value;   
}


int file_last(void)
{
    if(file_vide())
        exit(1);
    return last->value;   
}


void Afficher(void)
{
    if(file_vide()){
        printf("rien a afficher la file est vide \n");
        return ;
    }
    FileElement *temp=first;
    while(temp != NULL)
    {
        printf("%d <-",temp->value);
        temp=temp->next;
    }
    printf("\n");
}


void Enfiler(int x)
{
    FileElement *element;
    element =malloc(sizeof(*element));

    if(element == NULL){
        fprintf(stderr,"probleme d'allocation dynamique\n");
    }
    element->value=x;
    element->next = NULL;

    if(file_vide()){
        first=element;
        last=element;
    }
    else{
        last->next =element;
        last =element;
    }
    int nb_element=0;
    nb_element++;
}


void Defiler(void)
{
    if(file_vide()){
        printf("file vide,rien a retirer\n");
        return;
    }
    FileElement *temp=first;

    if(first == last){
        first =NULL;
        last=NULL;
    }else {
        first =first->next;
    }
    free(temp);
    int nb_element=0;
    nb_element--;
}


void vider_file(void)
{
    if(file_vide()){
        printf("rien a nettoyer file deja vide.\n");
        return;
    }
    while(!file_vide())
    {
        Defiler();
    }
}