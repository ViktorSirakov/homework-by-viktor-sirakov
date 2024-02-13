#include <stdio.h>

 // __FILE__ -> Shows the file directory of this source code
 // __LINE__ -> Shows the number of the line where the macro is called
 // __DATE__ -> Shows the date of the day the program gets activated
 // __TIME__ -> Shows the exact time (+ seconds) of the program's activation

 void main()
{
        printf("This is the Directory: %s\n", __FILE__);
        printf("This is the Line: %d\n", __LINE__);
        printf("This is the Date: %s\n", __DATE__);
        printf("This is the Time: %s\n", __TIME__);
}