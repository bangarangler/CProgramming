#include <stdio.h>
#include <stdbool.h>

/*int main()*/
/*{*/
  /*int a = 33;*/
  /*int b = 15;*/
  /*int result = 0;*/

  /*result = a + b;*/
  /*[>result = a - b;<]*/
  /*[>result = a * b;<]*/
  /*[>result = a / b;<]*/
  /*[>result = a % b;<]*/

  /*printf("result is %d\n", result);*/
  /*[>printf("a is %d\n", a++);<]*/
  /*printf("a is %d\n", ++a);*/
  /*return 0;*/
/*}*/

/*int main()*/
/*{*/
  /*bool a = true;*/
  /*bool b = true;*/
  /*bool result;*/

  /*[>result = a && b;<]*/
  /*[>result = a || b;<]*/
  /*result = !a && !b;*/

  /*printf("%d", result);*/
  /*return 0;*/
/*}*/

int main()
{
  unsigned int a = 60; // 00111100
  unsigned int b = 13; // 00001101
  int result = 0;

  result = a | b;
  // 00111101
  printf("result is %d", result);
  return 0;
}
