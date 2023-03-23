#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  while (condition)
  {
    statement
  }
  */

  int i=0,num;
 printf("please enter a number...\n");
 scanf("%d",&num);

  while (i<num)
  {
      printf("\n%d",i);
      i++;
  }
    return 0;
}
