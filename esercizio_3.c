#include <stdio.h>

int main()
{
    int soldi=1000,soldi_mamma=500,somma=soldi,anni=1;
    while (anni<=4)
    {
      somma=somma+soldi_mamma;
      anni=anni+1;
    } 
    printf ("%d",somma);


}


