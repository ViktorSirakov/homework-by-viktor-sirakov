#include <stdio.h>
#include <string.h>
#include "processes.h"

void main()
{
  char option[20];
  int exit = 0;
  int count = 1;
  printf("Welcome to the task manager!\n");
  printf("\n");
  do
  {
    printf("Type 'Create', 'Print', 'Stop' or 'Exit' to continue.\n");
    scanf("%s", option);
    if(strcmp(option, "Create") == 0)
    {
      char name[30];
      printf("Enter a name for the process: ");
      scanf("%s", name);
      if(count > 5) printf("\nToo many processes!");
      else
      {
        createnewprocess(name);
        count++;
      }
    }
    if(strcmp(option, "Print") == 0)
    {
      printprocess();
    }
    if(strcmp(option, "Stop") == 0)
    {
      int num;
      printf("\nEnter the number of the process to stop: ");
      scanf("%d", &num);
      stopprocess(num);
    }
    if(strcmp(option, "Exit") == 0)
    {
      exit = 1;
      break;
    }
  }while(exit != 1);
}