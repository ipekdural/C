#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
// The strcat() function concatenates string2 to string1 and ends the resulting string with the null character.

int dizi[100];
strcpy(dizi,"hello! ");
strcat(dizi,"how ");
strcat(dizi,"are ");
strcat(dizi,"you?");

printf("%s",dizi);




}
