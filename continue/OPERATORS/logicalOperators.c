#include<stdio.h>
#include<stdlib.h>

int main3()
{
    /*LOG�CAL OPERATORS
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
