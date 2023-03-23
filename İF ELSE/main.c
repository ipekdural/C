#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;
    printf("iki adet sayi giriniz...\n");

    scanf("%d",&sayi1);
    scanf("\n%d",&sayi2);

    if(sayi1<sayi2)
    {
        printf("birinci sayi ikinci sayidan kucuktur.");
    }


    else if (sayi1>sayi2)
    {
        printf("birinci sayi ikinci sayidan buyuktur.");
    }


     else
    {
        printf("birinci sayi ikinci sayiya esittir.");
    }

}



