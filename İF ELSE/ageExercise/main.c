#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("lutfen yasinizi giriniz...\n");
    scanf("%d",&age);

    if (age>=18)
    {
            printf("yasal olarak oy kullanabilirsiniz...");

    }
    else
    {
            printf("yasal olarak oy kullanamazsiniz...");

    }

    return 0;
}
