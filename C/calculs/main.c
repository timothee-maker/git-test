#include <stdio.h>
#include <stdlib.h>

struct Coordonnees
{
    int x;
    int y;
};
typedef struct Coordonnees Coordonnees;
void initt(Coordonnees *point);

int main()
{
    Coordonnees point;
    initt(&point);
    point.x = 5;
    point.y = 8;
    printf("%d %d", point.x, point.y);
    return 0;

}

void initt(Coordonnees *point)
{
    point->x = 0;
    point->y = 0; 
}



