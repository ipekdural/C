#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
char x[100];
char y[100];
int z;
printf("enter a string\n");
scanf("%s",&x);
printf("enter a string\n");
scanf("%s",&y);
printf("enter how many char do u want to append...\n");
scanf("%d",&z);
strncat(x,y,z);//add z many char of y to x **** y den z tane karakteri x e ekle
printf("%s",x);
return 0;
}
