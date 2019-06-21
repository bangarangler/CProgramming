/*
 * program should create 4 variables of type double
 * one variable to store the width of the rectangle
 * one variable to store the height of a rectangle
 * one variable to store the perimeter of the rectangle
 * one variable to store the area of the rectangle
 * should display the height, width, and perimeter variables in the correct
 * format.
 * create a project Rectangle
 * main.c file for work.
 * declare and initialize the height and width variables to any value (need to
 * be of type double)
 * stretch pass in command line variables
 * declare the perimeter and area values to 0.0
 * Assign to the perimeter and area values the correct data based on
 * calculations perimeter = 2.0 * (height + width);
 * area = width * height;
 * use printf function and correct format specifier to display required output
 * compile and link source code and run program
  */


#include <stdio.h>

int main(int argc, char *argv[])
{
  /*double width = 44.44;*/
  /*double height = 66.66;*/
  double width = *argv[0];
  double height = *argv[1];
  double perimeter = 0.0;
  double area = 0.0;

  perimeter = 2.0 * (height + width);
  area = width * height;

  printf("The width is: %e\n", width);
  printf("The height is: %e\n", height);
  printf("The perimeter is: %g\n", perimeter);
  printf("The area is: %g\n", area);
}
