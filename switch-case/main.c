#include <stdio.h>
#include <stdlib.h>

int main()
{

 //    switch (expression)
 //   {
 //   case /* constant-expression */:
        /* code */
 //       break;

 //   default:
 //       break;
 //   }




    int day;
    printf("which day?\n");
    scanf("%d",&day);
    switch(day)
    {
        case 1: printf("%d. day is monday.",day);
        break;

        case 2: printf("%d. day is tuesday.",day);
        break;

        case 3: printf("%d. day is wednesday.",day);
        break;

        case 4: printf("%d. day is thursday.",day);
        break;

        case 5: printf("%d. day is friday.",day);
        break;

        case 6: printf("%d. day is saturday.",day);
        break;

        case 7: printf("%d. day is sunday.",day);
        break;

        default:printf("invalid syntax...");
        break;




    }
    return 0;

}
