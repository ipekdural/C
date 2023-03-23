#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    for (i;i<10;i++)
    {

        if (i==4)
        {
            continue;//skip the 4 and continue the loop
        }

    printf("%d\n",i);
    }
    return 0;
}
