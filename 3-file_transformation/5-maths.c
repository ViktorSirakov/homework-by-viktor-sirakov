#include <stdio.h>
#include "5-maths.h"

int fact(unsigned int n)
{
    int result = 1, i;
    for (i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}
