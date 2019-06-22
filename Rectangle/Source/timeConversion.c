/*
 *Author: Jon
 *Purpose: Challenge
 Program should convert the number of minutes to days and years.
 ask the user to enter the number of minutes via the terminal
 program should display output as minutes and the nit's equivalent in years and days
 type double vars. min can be int
 min in year
 years
 days
 * */

#include <stdio.h>

int main()
{
  int minEntered = 0;
  double years = 0.0;
  int days = 0.0;
  double minInYear = 0;

  printf("Please enter the number of minutes: ");
  // get input from user
  scanf("%d", &minEntered);
  minInYear = (60 * 24 * 365);
  years = (minEntered / minInYear);
  days = (int)((minEntered / 60.0) / 24.0);

  printf("%d minutes is approximately %f years and %d days\n", minEntered, years, days);
  return 0;
}
