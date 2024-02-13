#include <stdio.h>
#include <string.h>
#include "processes.h"

struct Process processes[5];
int arr[5];
int processescount = 0;
struct Process process;

static int nextprocessid()
{
  static int id = 0;
  id++;
  if(id <= 5)
    return id;
  else id = 0;
}

struct Process* createnewprocess(char name[30])
{
  static int i = 0;
  static int br = 0;
  br++;
  i++;
  strcpy(processes[i].process_name, name);
  process.process_id = nextprocessid();
  arr[br] = process.process_id;
  if(processescount <= 5)
  {
    processescount++;
  }
  return processes;
}

int stopprocess(int num)
{
  int sort = 0;
  if(num > 0 && num <= processescount)
  {
    num = arr[num];
    if(num != 0)
    {
      strcpy(processes[num].process_name, "");
      for(int j = 1; j <= processescount; j++)
      {
        if(strcmp(processes[j].process_name, "") == 0)
          sort = 1;
        if(j+1 > processescount)
        {
          strcpy(processes[j].process_name, "");
          arr[j] = 0;
        }
        else
        {
          strcpy(processes[j].process_name, processes[j+1].process_name);
          arr[j] = arr[j+1];
        }
      }
    }
  }
  processescount--;
}

void printprocess()
{
  if(processescount != 0)
  {
    for(int i = 1; i <= processescount; i++)
      if(strcmp(processes[i].process_name, "") != 0)
        printf("Name: %s\nID: %d\n", processes[i].process_name, arr[i]);
  }
  else printf("No running processes!\n");
}