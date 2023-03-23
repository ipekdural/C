#include <stdio.h>
#include <stdlib.h>

int main()
{
 /*SIZEOF METODU KARAKTERIN HAFIZADA NE KADAR YER TUTTUGUNU BASTIRIR.*/
    printf("integer hafizada %d byte kadar yer kaplar.\n",sizeof(int));
    printf("float hafizada %d byte kadar yer kaplar.\n",sizeof(float));
    printf("double hafizada %d byte kadar yer kaplar.\n",sizeof(double));
    printf("character hafizada %d byte kadar yer kaplar.\n",sizeof(char));


    double sayim=34;
    char isim="a";
    printf("sayim hafizada %d byte kadar yer tutar.\nkarakterim hafizada %d byte kadar yer tutar.\n",sizeof(sayim),sizeof(isim));
}


