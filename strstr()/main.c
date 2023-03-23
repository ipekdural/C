#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
//The strstr() function returns pointer to the first occurrence of the matched string in the given string.
// It is used to return substring from first match till the last character.
char text[]="Hello! I am learning c language...";
char *x;
x=strstr(text,"lear");
printf("search result:%s",x);
    return 0;
}
