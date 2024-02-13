#include "transformation.h"
#include <stdio.h>
#include <string.h>

void str_to_num(char *strings) 
{
  struct transformation transformers;
  int ok = 1;
  for (int i = 0; strings[i] != '\0'; i++) 
  {
    if (strings[i] < '0' || strings[i] > '9') {
      transformers.result = 0;
      strcpy(transformers.error, "Invalid String Input");
      printf("Here is the Result: %ld", transformers.result);
      puts(transformers.error);

      ok = 0;
      break;
    }
  }
  if (ok == 1) {
    int num = 0;
    for (int i = 0; strings[i] != '\0'; i++) 
    {
      num = num * 10 + (strings[i] - '0');
    }
    transformers.result = num;
    strcpy(transformers.error, "\0");
    printf("Here is the Result: %ld", transformers.result);
    printf("\n%s", transformers.error);
  }
}