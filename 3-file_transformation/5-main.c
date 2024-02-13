#include <stdio.h>
#include "maths.h"

void main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The factorial is %d", fact(n));
}