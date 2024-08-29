#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 1000 // Tableau de taille 1000
 
int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    int score[3] = {0};
    fichier = fopen("open.c", "r");

    if (fichier != NULL){
        fscanf(fichier, "%d %d %d", &score[0],&score[1], &score[2]);
        printf("Les meilleurs scores sont : %d, %d et %d", score[0], score[1], score[2]);
    }
    fclose(fichier);
    
    return 0;
}