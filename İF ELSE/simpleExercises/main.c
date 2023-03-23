#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("3 adet sayi giriniz\n");
    scanf("%d%d%d",&num1,&num2,&num3);




    //EN BÜYÜK SAYIYI BULMA
    if (num1>num2 && num1>num3)
    printf("%d en buyuk sayidir...",num1);

    else if (num2>num1 && num2>num3)
    printf("%d en buyuk sayidir...",num2);

    else
    printf("%d en buyuk sayidir...",num3);





    //TEK ÇÝFT SORGULAMA

    if (num1%2==0)
    {
        printf("\n%d sayisi cift sayidir...",num1);
    }

    else
    {
        printf("\n%d sayisi tek sayidir...",num1);
    }

    if (num2%2==0)
    {
        printf("\n%d sayisi cift sayidir...",num2);
    }

    else
    {
        printf("\n%d sayisi tek sayidir...",num2);
    }
    if (num3%2==0)
    {
        printf("\n%d sayisi cift sayidir...",num3);
    }

    else
    {
        printf("\n%d sayisi tek sayidir...",num3);
    }

    return 0;
}
