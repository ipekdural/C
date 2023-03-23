#include <stdio.h>
#include <stdlib.h>

int main()
{
    //karakter dizisinin elemanlarinin sonuna ,dizinin bittigini belirten \0 konur,
    char x[]={'i','p','e','k','\0'};
    char x1[]="dural";
    char y[20];//eger karakter dizisi tanimlanmiyorsa parantez icine
              //alinabilecek max karakter sayisi yazilir

    printf("%s\n%s\n",x,x1);
    scanf("%s",y);
    printf("isminiz:%s",y);



    return 0;
}

