#include <stdio.h>

void main()
{
  char strconc1[100], strconc2[100];
  int ok = 1;
  do
    {
      printf("Enter the first string: \n");
      scanf("%s", strconc1);
      printf("Enter the second string: \n");
      scanf("%s", strconc2);
      if(strlength(strconc1) > 50 || strlength(strconc2) > 50)
      {
        ok = 0;  
      }
      if(ok == 0) printf("The strings are too long.\n");
    }while(!ok);
  strconcat(strconc1, strconc2);
  printf("The concatenated string is: %s", strconc1);
}