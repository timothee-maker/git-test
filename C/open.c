#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbAmis = 0, i = 0;
    int* ageAmis = NULL;
    printf("Combien d'amis avez vous ?");
    scanf("%d", &nbAmis);
    if (nbAmis > 0)
    {
        ageAmis = malloc(nbAmis * sizeof(int));

        for(i = 0; i < nbAmis; i ++)
        {
            printf("Quel est le nom de l'amis %d\n", i + 1);
            scanf("%d", &ageAmis[i]);
        }

        for(i = 0; i < nbAmis; i ++)
        {
            printf("L'amis %d à %d\n", i + 1, ageAmis[i]);
        }
        free(ageAmis);
    }

    return 0;
}
