#include <stdio.h>
#include <stdlib.h>

int main()
{
  //int x[matrix number][row number][column number];
  int x[2][3][4]={{ {1,2,3,4},{5,6,7,8},{9,10,11,12} }, { {13,14,15,16},{17,18,19,20},{21,22,23,24} }};
  //x has to matrix 3 rows and 4 columns
  printf("%d",x[1][2][3]);


    return 0;
}
