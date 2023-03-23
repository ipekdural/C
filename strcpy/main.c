#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    //The strcpy() function copies string2, to the location that is specified by string1.
    //It replaces the whole string instead of appending it.
    //strcpy(kopyanin yapistitlacagi str,kopyasi alincak str)

    char x[]="hello weirdo!";
    char y[100];
    strcpy(y,x);
    printf("%s",y);

    char z[100];
    strcpy(z,"dural");
    printf("%s",z);

    return 0;

}
