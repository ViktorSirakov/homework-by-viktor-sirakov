#include "transformation.h"
#include <stdio.h>
#include <string.h>

void main() {
  char str;
  printf("Enter a sequence of numbers or letters: ");
  scanf("%s", &str);
  str_to_num(str);
}