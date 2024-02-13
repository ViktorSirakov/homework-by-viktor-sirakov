#include <stdio.h>
#include <limits.h>
#include <string.h>
#include "safeint.h"


int safeadd(int a, int b)
{
  int ok = 1;
  struct SafeResult result;
  result.value = a + b;
  if(a < 0 && b < 0)
  {
    if(result.value > 0)
    {
      ok = 0;
    }
  }
  if(a > 0 && b > 0)
  {
    if(result.value < 0)
    {
      ok = 0;
    }
  }
  if(a > 0 && b < 0)
  {
    b = -b;
    if(a < b)
    {
      ok = 0;
    }
  }
  if(a < 0 && b > 0)
  {
    a = -a;
    if(a > b)
    {
      ok = 0;
    }
  }
  if(ok)
  {
    result.errorflag = '0';
    return result.value;
  }
  else result.errorflag = '1';
  return result.errorflag;
}

int safesubtract(int a, int b)
{
  int ok = 1;
  struct SafeResult result;
  result.value = a - b;
  if(a > 0 && b > 0)
  {
    if(a > b)
    {
      if(result.value < 0)
      {
        ok = 0;
      }
    }
    else
    {
      if(result.value > 0)
      {
        ok = 0;
      }
    }
  }
  if(a < 0 && b < 0)
  {
    if(a > b)
    {
      if(result.value < 0)
      {
        ok = 0;
      }
    }
    else
    {
      if(result.value > 0)
      {
        ok = 0;
      }
    }
  }
  if(a > 0 && b < 0)
  {
    b = -b;
    if(a > b)
    {
      if(result.value < 0)
      {
        ok = 0;
      }
    }
  }
  if(ok)
  {
    result.errorflag = '0';
    return result.value;
  }
  else
  {
    result.errorflag = '1';
    return result.errorflag;
  }
}

int safemultiply(int a, int b)
{
  int ok = 1;
  struct SafeResult result;
  result.value = a * b;
  if(a > 0 && b > 0)
  {
    if(result.value < 0)
    {
      ok = 0;
    }
  }
  if(a < 0 && b < 0)
  {
    if(result.value < 0)
    {
      ok = 0;
    }
  }
  if(a > 0 && b < 0)
  {
    if(result.value > 0)
    {
      ok = 0;
    }
  }
  if(a < 0 && b > 0)
  {
    if(result.value > 0)
    {
      ok = 0;
    }
  }
  if(ok)
  {
    result.errorflag = '0';
    return result.value;
  }
  else
  {
    result.errorflag = '1';
    return result.errorflag;
  }
}

int safedivide(int a, int b)
{
  int ok = 1;
  struct SafeResult result;
  result.value = a / b;
  if(a > 0 && b > 0)
  {
    if(result.value < 0)
    {
      ok = 0;
    }
  }
  if(a < 0 && b < 0)
  {
    if(result.value < 0)
    {
      ok = 0;
    }
  }
  if(a > 0 && b < 0)
  {
    if(result.value > 0)
    {
      ok = 0;
    }
  }
  if(a < 0 && b > 0)
  {
    if(result.value > 0)
    {
      ok = 0;
    }
  }
  if(b == 0)
  {
    ok = 0;
  }
  if(ok)
  {
    result.errorflag = '0';
    return result.value;
  }
  else
  {
    result.errorflag = '1';
    return result.errorflag;
  }
}

int safestrtoint(char *str)
{
  int znak = 1;
  int number = 0;
  int ok = 1;
  for(int i = 0; i < strlen(str); i++)
  {
    if(i == 0 && str[i] == '-')
    {
      znak = -1;
    }
    if(str[i] < '0' || str[i] > '9')
      ok = 0;
    if(str[i] >= '0' && str[i] <= '9')
    {
      number = number * 10 + (str[i] - '0');
    }
  }
  number *= znak;
  return number;
}