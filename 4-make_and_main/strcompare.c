#include <stdio.h>


void main() 
{
  char strcmps1[100], strcmps2[100];
  int ok = 1;
  do
    {
      printf("Enter the first string: \n");
      scanf("%s", strcmps1);
      printf("Enter the second string: \n");
      scanf("%s", strcmps2);
      if(strlength(strcmps1) > 50 || strlength(strcmps2) > 50)
      {
        ok = 0;  
      }
      if(ok == 0) printf("The strings are too long.\n");
    }while(!ok);
  strcompare(strcmps1, strcmps2);
}