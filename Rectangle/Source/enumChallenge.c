/*
 * Author: Jon
 * Purpose:
 */

#include <stdio.h>

int main()
{
  enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
  enum company google, facebook, xerox, yahoo, ebay, microsoft;
  google = GOOGLE;
  facebook = FACEBOOK;
  xerox = XEROX;
  yahoo = YAHOO;
  ebay = EBAY;
  microsoft = MICROSOFT;
  printf("Google is %d\n", google);
  printf("Facebook is %d\n", facebook);
  printf("Xerox is %d\n", xerox);
  printf("Yahoo is %d\n", yahoo);
  printf("Ebay is %d\n", ebay);
  printf("Microsoft is %d\n", microsoft);
  return 0;
}
