#include <stdio.h>
#include <stdlib.h>

int main()
{
    //BREAK IN WHILE
    int i=0;
    while(i<10)
    {
        printf("%d\n",i);

        if(i==4)
        {
            break;//when the condition occurs the loop breaks
        }
        i++;
    }

    //BREAK ÝN FOR
    int j;
    for(j=0;j<10;j+=1)
    {
        printf("\n%d",j);
        if(j==4)
        {
            break;
        }

    }


    return 0;
}
