#include <stdio.h>
#include <stdlib.h>
/*
 * creates an integer variable with a hard-coded value. assign that variables
 * address to a pointer variable
 * display as output the address of the pointer, the value of the pointer, and
 * the value of what the pointer is pointing to.
 * */

int main()
{
  int num = 150;
  int *pNum = NULL;

  pNum = &num;

  printf("num address is: %p\n", &num);
  printf("Address of pNum: %p\n", &pNum);
  printf("Value of the pNum: %p\n", pNum);
  printf("Value of what pNum is pointing to: %d\n", *pNum);


  return 0;
}
