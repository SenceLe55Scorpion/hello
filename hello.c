/**
 * Author: Khaldoon
 *         Kshammo@huskers.unl.edu
 * Date: 2024/07/29
 *
 * A simple hello world program in C
 * extra work
 *
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

//Daclaring all varables such as location A latitude

  double d=0;
  int R=6371;
  double lat1=0;
  double lat2=0;
  double lon1=0;
  double lon2=0;

  printf ("enter location A's latitude");
  scanf("%lf", &lat1);
  printf ("enter location A's longitude");
  scanf("%lf", &lon1);
  printf ("enter location B's latitude");
  scanf("%lf", &lat2);
  printf ("enter location B's longitude");
  scanf("%lf", &lon2);

/*
daclaring the value as raidan to plug into the equation
to convert degrees to raidans we will use r as the conversoun factor
that being (pi/180) then multipying that by the degrees to get my raidens
*/
  double r=(M_PI/180);
  double latr1=lat1*r;
  double lonr1=lon1*r;
  double latr2=lat2*r;
  double lonr2=lon2*r;

  double d = acos(sin(latr1)sin(latr2)+cos(latr1)cos(latr2)cos(lonr2-lonr1))* R;

printf ("%lf", d)


  return 0;
}

