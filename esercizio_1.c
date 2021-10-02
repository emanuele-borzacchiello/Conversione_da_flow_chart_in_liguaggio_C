#include <stdio.h>

int main()
{ 
    int y=5, x=1;
    
    do 
    {
        x= y*2;
        y= y-1;
    }while (y!=0);
    printf ("%d", x);

}

