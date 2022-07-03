#ifndef __FILE_H__
#define __FILE_H__
#include "file.h"


typedef struct FileElement
{
    int value;
    struct FileElement *next;
}FileElement,*File;

static FileElement *first =NULL;
static FileElement *last =NULL;

int file_vide(void);


int file_length(void);


int file_first(void);

int file_last(void);

void Afficher(void);

void Enfiler(int x);

void Defiler(void);

void vider_file(void);

/*nos fonctions ne prennent pas de parametres parce que dans la declarations de la st
ucture on accede directement au elemts */
#endif