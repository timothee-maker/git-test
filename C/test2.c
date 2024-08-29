#include <stdio.h>
#include <stdlib.h>



int choix()
{
   int menu = 0;
   while(menu <1 || menu > 4)
   {
      printf("Voulez vous de la dinamite avec ceci ?");
      scanf("%d", &menu);


   }

   return menu;
}
int main() 
{
   switch (choix())
   {
   case 1 : 
      printf("Ok bien bien");
      break;
   
   default:
      break;
   }
   
   
   return 0; 
}
