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


/*
 * Author: Jon
 * Purpose: This program is going to calculate the area of a rectangle
   */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  /*double width = 44.44;*/
  /*double height = 66.66;*/
  double width = atoi(argv[1]);
  double height = atoi(argv[2]);
  double perimeter = 0.0;
  double area = 0.0;

  perimeter = 2.0 * (height + width);
  area = width * height;

  printf("Width is %.2f, Height is %.2f\n", width, height);
  /*printf("The width is: %e\n", width);*/
  /*printf("The height is: %e\n", height);*/
  printf("The perimeter is: %.2f\n", perimeter);
  printf("The area is: %.2f\n", area);
  return 0;
}
