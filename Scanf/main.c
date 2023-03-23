#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("enter a integer number:\n");
    scanf("%d",&sayi);
    printf("your integer number:%d",sayi);

    float num;
    printf("\nenter a float number:\n");
    scanf("%f",&num);
    printf("your float number:%.3f",num);

    double num1;
    printf("\nenter a float number:");
    scanf("%lf",&num1);
    printf("your float number:%.3lf",num1);

    char char1;
    printf("\nenter a character:\n");
    scanf(" %c",&char1);
    printf("your character:%c",char1);

}















