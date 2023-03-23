#include <stdio.h>
#include <stdlib.h>

//use constants for once defined and cannot modified later
//#define NAME(macro) value
//const datatype = value;

#define PI 3.14
const char name='a';

int main()
{
    printf("%.2lf\n",PI);
    const int number=7;
    printf("%d\n",number);
    printf("%c",name);

}

