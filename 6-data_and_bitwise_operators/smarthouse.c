#include <stdio.h>

void main()
{
  unsigned char lights = 237;
  unsigned char light1 = 1 << 0;
  unsigned char light2 = 1 << 1;
  unsigned char light3 = 1 << 2;
  unsigned char light4 = 1 << 3;
  unsigned char light5 = 1 << 4;
  unsigned char light6 = 1 << 5;
  unsigned char light7 = 1 << 6;
  unsigned char light8 = 1 << 7;
  printf("Type 'Print' or 'Switch' depending on your preference: \n");
  char function[100];
  gets(function);
  if(strcmp(function, "Print") == 0)
  {
    printf("The light is on in rooms:\n");
    if((lights & light1) == light1)printf("1 ");
    if((lights & light2) == light2)printf("2 ");
    if((lights & light3) == light3)printf("3 ");
    if((lights & light4) == light4)printf("4 ");
    if((lights & light5) == light5)printf("5 ");
    if((lights & light6) == light6)printf("6 ");
    if((lights & light7) == light7)printf("7 ");
    if((lights & light8) == light8)printf("8 ");
    printf("\n");
  }
  else if(strcmp(function, "Switch") == 0)
  {
    printf("Here are the lights after the switch:\n");
      if((lights & light1) != light1)printf("1 ");
      if((lights & light2) != light2)printf("2 ");
      if((lights & light3) != light3)printf("3 ");
      if((lights & light4) != light4)printf("4 ");
      if((lights & light5) != light5)printf("5 ");
      if((lights & light6) != light6)printf("6 ");
      if((lights & light7) != light7)printf("7 ");
      if((lights & light8) != light8)printf("8 ");
    printf("\n");
  }
}