#ifndef SCHOOLROOM_H_INCLUDED
#define SCHOOLROOM_H_INCLUDED
#endif

#include "person.h"

typedef struct
{
    int room_num;
    struct Person students[50];
} SchoolRoom;