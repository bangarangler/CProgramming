#include <stdio.h>
#include <stdlib.h>
/*
 * write a program that tests your understanding of pointer arithmetic and the
 * const modifier
 * calculates the length of a string
 * function should take as parameter a const char pointer
 * can only determine the length of the string using pointer arithmetic
 * incrementation operator (++pointer) to get to the end of the string
 * required to use a while loop using value of pointer to exit
 * should subtract two pointers one pointing to end of string and one pointing
 * to beg of string
 * should return an int that is the length of string passed into function
 * */

int stringLength(const char *string);

int main()
{
  printf("%d \n", stringLength("stringLength test"));
  printf("%d \n", stringLength(""));
  printf("%d \n", stringLength("Jon"));

  return 0;
}

int stringLength(const char *string)
{
  const char *lastAddress = string;

  while (*lastAddress)
    ++lastAddress;

  return lastAddress - string;
}
