#include <stdio.h>
#include <stdlib.h>

int main()
{
 char name[30];
 printf("please enter your name\n");
 gets(name);

 printf("please enter your name\n");
 fgets(name,sizeof(name),stdin);
//fgets is more useful for strings. because when u use space between strings scanf
//doesnt prints just first string.

    return 0;
}
