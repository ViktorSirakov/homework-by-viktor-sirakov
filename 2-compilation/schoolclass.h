#ifndef SCHOOLCLASS_H_INCLUDED
#define SCHOOLCLASS_H_INCLUDED
#endif

#include "person.h"

typedef struct
{
    struct Person grade_st[26];
    char grade_let;
    int grade_num;
    struct Person teacher;
} SchoolClass;