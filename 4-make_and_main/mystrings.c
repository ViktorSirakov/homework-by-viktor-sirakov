#include <stdio.h>
#include "mystrings.h"

int strlength(char str[100]) {
  int len = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    len++;
  }
  return len;
}

void strconcat(char str1[100], char str2[100])
{
  int i=0, j=0;
  while(str1[i]!='\0')
    i++;
  while(str2[j]!='\0')
  {
    str1[i]=str2[j];
    j++;
    i++;
  }
  str1[i]='\0';
}

void strcompare(char str3[100], char str4[100]) 
{
  int ok;
  for (int i = 0; str3[i] != '\0'; i++)
    for(int j = 0; str4[j] != '\0'; j++)
    {
      if (str3[i] == str4[j])
      {
        ok = 1;
      }
      else
      {
        ok = 0;
      }
    }
  if (ok == 1) printf("The strings are equal\n");
  else printf("The strings are NOT equal\n");
}