#include <stdio.h>
#include <math.h>
#include <string.h>
#include "quadraticroots.h"

void main(int argc, char **argv)
{
  struct QuadraticRootsResult quadratic;
  char a[100], b[100], c[100];
  strcpy(a, argv[1]);
  strcpy(b, argv[2]);
  strcpy(c, argv[3]);
  long double a_value, b_value, c_value;
  a_value = safestrtonum(a);
  b_value = safestrtonum(b);
  c_value = safestrtonum(c);
  printf("%Lfx^2 + %Lfx + %Lf = 0\n", a_value, b_value, c_value);
  findroots(a_value, b_value, c_value);
}