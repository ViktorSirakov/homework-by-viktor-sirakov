#include <stdio.h>

#define COMMAND(NAME, TYPE) void TYPE##_##NAME##_command()
#define DEFINE_COMMAND(NAME, TYPE)  void TYPE##_##NAME##_command()

COMMAND(quit, external)
{
    printf("This is the first command.\n");
}
DEFINE_COMMAND(second, external)
{
    printf("This is the second command.\n");
}

int main()
{
  external_quit_command();
  external_second_command();
  return 0;
}