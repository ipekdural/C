#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char c[]="ipek";
   //strlen() gives the length of the characters in string.
   // '\0'is not counted by strlen()
   // '\0' is counted by sizeof()

    printf("length of the string is:%d\n",strlen(c));//output is 4

    printf("size of the string is:%d",sizeof(c));//output is 5 because \0 is also counted

    return 0;
}
