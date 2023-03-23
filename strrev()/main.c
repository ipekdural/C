#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
char name[30];
printf("please enter your name ...\n");
fgets(name,sizeof(name),stdin);
printf("reverse version of your name is:%s",strrev(name));

    return 0;
}
