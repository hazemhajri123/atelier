#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nbr,i,b;
   do
   {
       printf("nbr de battons?\n");
       scanf("%d",&nbr);
   }
   while (nbr<0);
     for (i=1;i<=nbr;i++)
      printf("|");
    printf("Joueur 1, entrez le nombre de bâtons à tirer : \n");
       scanf("%d",&b);
  do
   {
       nbr=nbr-b;
         for (i=1;i<=nbr;i++)
         printf("|");
    printf("Joueur 2, entrez le nombre de bâtons à tirer : \n");
    scanf("%d",&b);
    nbr=nbr-b;
         for (i=1;i<=nbr;i++)
        printf("|");
      printf("Joueur 1, entrez le nombre de bâtons à tirer : \n");
    scanf("%d",&b);
    nbr=nbr-b;
         for (i=1;i<=nbr;i++)
        printf("|");

   }
    while ((b>1)&&(b<3)&&(nbr!=0));
    return 0;
}
