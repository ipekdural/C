#include <stdio.h>
#include <stdlib.h>

int main()
{
/*ARÝTHMETÝC OPERATORS
+  -  *  /  %  ++  --    */
    int x,y;
    x=10;
    y=3;
    printf("addition:%d\n",x+y);

    printf("subsraction:%d\n",x-y);

    printf("multiplication:%d\n",x*y);

    printf("division:%d\n",x/y);

    printf("addition:%d\nsubsraction:%d\nmultiplication:%d\ndivision:%d\n",x+y,x-y,x*y,x/y);

//kalan bulma operatoru %

    printf("mode:%d",x%y);
//bir attýrma ++ bir eksiltme --
    printf("\nadd one:%d",++x);
    printf("\nreduce one:%d",--y);

}
