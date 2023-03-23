#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int(4 bytes) | %d
    double(8 bytes) | %lf
    float(4 bytes) | %f
    cahr(1 bytes) | %c
    */
    //INTEGER A DEGER ATAMA YONTEMLERI
    int sayi=15;
    printf("%d",sayi);

    int sayi1;
    sayi1=14;
    printf("\n%d",sayi1);

    int num1,num2;
    num1=13;
    num2=12;
    printf("\n%d\n%d",num1,num2);

    int num3=11;
    int num4=10;
    printf("\n%d\n%d",num3,num4);

    int num5=9,num6=8;
    printf("\n%d\n%d",num5,num6);

    //FLOAT VE DOUBLE A DEGER ATAMA YONTEMLERI
    //Virgulden sonra kac basamak bastirilmasini istiyorsak yuzde isaretinden sonra nokta koyup belirtiriz...
    float num11=3.5;
    float num22=7.4;
    printf("\n%.1f\n%.2f",num11,num22);


    double num111=1.23;
    float num222=2.34;
    printf("\n1.sayim:%.2lf\n2.sayim:%.2f",num111,num222);


    //CHAR A DEGER ATAMA
    char ifade='a';
    printf("\nkarakterim:%c",ifade);

}
