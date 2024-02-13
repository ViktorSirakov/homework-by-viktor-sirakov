#ifndef PROCESSES_H
#define PROCESSES_H

extern int processescount;

struct Process {
  int process_id;
  char process_name[30];
};

extern struct Process processes[5];

static int nextprocessid();
struct Process* createnewprocess(char name[30]);
int stopprocess(int num);
void printprocess();

#endif