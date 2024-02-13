#include <stdio.h>
#include <limits.h>
#include <string.h>
#include "safeint.h"

void main(int argc, char **argv)
{
  struct SafeResult result;
  int c = 0;
  char a[100], b[100];
  strcpy(a, argv[1]);
  strcpy(b, argv[2]);
  int a_int = safestrtoint(a), b_int = safestrtoint(b);
  c = safemultiply(a_int, b_int);
  if(result.errorflag == '1') printf("Errorflag: 1, Error!\n");
  else
  {
    printf("The result of the multiplication between %d and %d is %d\n", a_int, b_int, c);
    printf("Errorflag: 0, No errors\n");
  }
}