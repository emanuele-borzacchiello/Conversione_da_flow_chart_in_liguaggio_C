#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=0;
    while (a>=0)
    {
        b=b+1;
        if (b!=3)
        {
            a=1;
            
        }
        else 
        { 
           printf ("a=%d,b=%d",a,b);
           exit(1);
        }
    }
}

