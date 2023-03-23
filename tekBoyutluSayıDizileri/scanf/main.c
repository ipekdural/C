#include <stdio.h>
#include <stdlib.h>

int main()
{

//FOR DÖNGÜSÜ ÝLE
int dizi[3];

for (int i=0;i<3;i++)
{
    scanf("%d",&dizi[i]);

}

for (int i=0;i<3;i++)
{

        printf("%d ",dizi[i]);
}
printf("\n");

//WHILE DONGUSU ILE

int serie[3];
int i=0;
while (i<3)
{
    scanf("%d",&serie[i]);
    i++;
}
i=0;
while (i<3)
{
    printf("%d ",serie[i]);
    i++;
}


//DO WHILE

int serie1[3];
i=0;
do
{
    scanf("%d",&serie1[i]);
    i++;
}while (i<3);


i=0;
while (i<3)
{
    printf("%d ",serie1[i]);
    i++;
}


    return 0;
}
