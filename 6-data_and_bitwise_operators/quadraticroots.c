#include <stdio.h>
#include <math.h>
#include <string.h>
#include "quadraticroots.h"

struct QuadraticRootsResult quadratic;

void findroots(int a, int b, int c)
{
  quadratic.norealroots = 0;
  float D = (b * b - 4 * a * c);
  if (D < 0)
  {
    quadratic.norealroots = 1;
  }
  quadratic.x1 = (-b + sqrt(D)) / (2 * a);
  quadratic.x2 = (-b - sqrt(D)) / (2 * a);
  if(quadratic.norealroots == 1)
    printf("\nError! No real roots.");
  else
    printf("x1 = %Lf\nx2 = %Lf", quadratic.x1, quadratic.x2);
}

int safestrtonum(char *str)
{
  int znak = 1;
  int number = 0;
  int ok = 1;
  for(int i = 0; i < strlen(str); i++)
  {
    if(i == 0 && str[i] == '-')
    {
      znak = -1;
    }
    if(str[i] < '0' || str[i] > '9')
      ok = 0;
    if(str[i] >= '0' && str[i] <= '9')
    {
      number = number * 10 + (str[i] - '0');
    }
  }
  number *= znak;
  return number;
}