#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char x[]="dural";
    char y[]="durAL";

    int sonuc=strncmp(x,y,3);

    if (sonuc==1)
    {
        printf("first string bigger than second.(according to ASCII)");
    }
    else if(sonuc==-1)
    {
        printf("second string bigger than first.(according to ASCII)");
    }
     else //(sonuc==0)
    {
        printf("strings are equal.");
    }




        return 0;
}

