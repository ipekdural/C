#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10]={0,1,2,3,4,5,6,7,8,9};
    char dizi2[3]={'a','b','?'};
    printf("%d\n%c\n",dizi[3],dizi2[1]);//dizinin 4. elemani ve dizi2nin 2. elemani bastirilir.


   //DIZI ELEMANLARINI BASTIRMA
   int i,serie[10];
   for (i=0;i<10;i++)
   {
       serie[i]=i*2;
       printf("%d\n",serie[i]);
   }


    return 0;
}
