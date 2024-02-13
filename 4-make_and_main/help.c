#include <stdio.h>
#include <string.h>

void main()
{
  char help_str[100];
  printf("Enter one of these 3 functions for help: \n");
  printf("strlength\n");
  printf("strconcat\n");
  printf("strcompare\n");
  printf("\n");
  scanf("%s", help_str);
  getchar();
  if(strcmp(help_str, "strlength") == 0) 
    printf("strlength -> Shows the length of a string.\n");
  if(strcmp(help_str, "strconcat") == 0) 
    printf("strconcat -> Concatencates two strings.\n");
  if(strcmp(help_str, "strcompare") == 0) 
    printf("strcompare -> Compares two strings.\n");
}