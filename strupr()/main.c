#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
//The strupr( ) function is used to converts a given string to uppercase.
char text[30];
printf("please enter a text...\n");
fgets(text,sizeof(text),stdin);
printf("uppercase of your text is : %s",strupr(text));
    return 0;
}
