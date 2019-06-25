#include <stdio.h>
#include <stdlib.h>
/*
 * function that squares a number by itself
 * should define as parameter an int pointer
 * */

void square(int * const x);

int main()
{
  int num = 9;

  square(&num);
  printf("The square of the given number is %d\n", num);

  return 0;
}

void square(int * const x)
{
  *x = (*x) * (*x);

}
