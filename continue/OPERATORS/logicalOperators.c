#include<stdio.h>
#include<stdlib.h>

int main3()
{
    /*LOGÝCAL OPERATORS
    && (and)
    || (or)
    !  (not)
    */
    int x,y;
    x=5;
    y=6;
    printf("%d",(x==y)&&(x<y));
    printf("%d",(x==y)||(x<y));
    printf("%d",!((x==y)&&(x<y)));
}
