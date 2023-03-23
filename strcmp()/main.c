#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{

/*The function strcmp() is a built-in library function and it is declared in “string. h” header file.
 This function is used to compare the string arguments.
 It compares strings lexicographically which means it compares both the strings character by character.*/

    char x[]="dural";
    char y[]="DURAL";

    int sonuc=strcmp(x,y);

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
