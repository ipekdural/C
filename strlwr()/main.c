#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   //The strlwr( ) function is a built-in function in C and is used to convert a given string into lowercase.
   char str[30];
   printf("enter a sentence...\n");
   fgets(str,sizeof(str),stdin);
   printf("your sentences in lowercase:%s\n",strlwr(str));
    return 0;
}
