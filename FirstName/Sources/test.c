/*
Author: Jon Palacio
Purpose: This program prints out my name to screen
Date: 06/21/2019
*/

#include <stdio.h>
#include <stdbool.h>

/*int main()*/
/*{*/
  /*// this code is displaying my name*/
  /*printf("Hi, my name is Jon");*/
  /*return 0;*/
/*}*/

/*int main()*/
/*{*/
  /*char str[100];*/
  /*int i;*/

  /*printf("Enter a value :");*/

  /*scanf("%d %s", &i, str);*/

  /*printf("\nYou entered: %d::::%s\n", i, str);*/


  /*return 0;*/
/*}*/

/*int main()*/
/*{*/
  /*double x;*/

  /*scanf("%lf", &x);*/
  /*return 0;*/
/*}*/

/*int main()*/
/*{*/
  /*int x = 12;*/
  /*x = 1212;*/

  /*return 0;*/
/*}*/

/*int main()*/
/*{*/
  /*float jon = 31.333;*/
  /*double jon2 = 56.666666666666666666e+11;*/
  /*bool boolVariable = true;*/
  /*bool anotherBoolean = false;*/
  /*return 0;*/
/*}*/

/*int main()*/
/*{*/
  /*enum gender { male, female };*/
  /*enum gender myGender;*/
  /*myGender = male;*/

  /*enum gender anotherGender = female;*/
  /*bool isMale = (myGender == anotherGender);*/
  /*return 0;*/
/*}*/

/*int main()*/
/*{*/
  /*char myCharacter = '\n';*/
  /*printf("%c", myCharacter);*/
  /*return 0;*/
/*}*/

/*int main()*/
/*{*/
  /*int integerVar = 100;*/
  /*float floatingVar = 331.79;*/
  /*double doubleVar = 8.44e+11;*/
  /*char charVar = 'W';*/
  /*bool boolVar = false;*/

  /*printf("integerVar = %i\n", integerVar);*/
  /*printf("floatingVar = %f\n", floatingVar);*/
  /*printf("floatingVar = %2.f\n", floatingVar);*/
  /*printf("doubleVar = %e\n", doubleVar);*/
  /*printf("doubleVar = %g\n", doubleVar);*/
  /*printf("charVar = %c\n", charVar);*/
  /*printf("boolVar = %i\n", boolVar);*/
/*}*/

/*int main()*/
/*{*/
  /*float x = 3.9993232323;*/
  /*printf("%.2f", x); //  4.00*/
/*}*/

int main(int argc, char *argv[])
  //pass in command line arguments after build like so... ./test Jon
{
  int numberOfArguments = argc;
  char *argument1 = argv[0];
  char *argument2 = argv[1];

  printf("Number of Arguments: %d\n", numberOfArguments);
  printf("Argument 1 is the program name: %s\n", argument1);
  printf("Argument 2 is the command line argument: %s\n", argument2);
  return 0;
}
