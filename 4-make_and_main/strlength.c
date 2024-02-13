#include <stdio.h>

void main()
{
  char strleng[100];
  int ok = 1;
  do
    {
      printf("Enter a string: \n");
      scanf("%s", strleng);
      if(strlength(strleng) > 50)
      {
        ok = 0;
      }
      if(ok == 0)
      {
        printf("The string is too long. \n");
      }
    }while(!ok);
  printf("The length of this string is %d symbol(s)", strlength(strleng));
}