#ifndef QUADRATICROOTS_H
#define QUADRATICROOTS_H

struct QuadraticRootsResult {
  long double x1, x2;
  int norealroots;
};

void findroots(int a, int b, int c);

int safestrtonum(char *str);

#endif