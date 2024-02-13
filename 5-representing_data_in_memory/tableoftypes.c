#include <stdio.h>
#include <limits.h>
  
void main()
{
  printf("%-10s %10s %6zu %20d %20d %4s %21u\n", "CHAR: ", "%c", sizeof(char), CHAR_MAX, CHAR_MIN, "%u", UCHAR_MAX);
  printf("%-10s %10s %6zu %20d %20d %4s %21u\n", "SHORT: ", "%hd", sizeof(short), SHRT_MAX, SHRT_MIN, "%hu", USHRT_MAX);
  printf("%-10s %10s %6zu %20d %20d %4s %21u\n", "INT: ", "%d", sizeof(int), INT_MAX, INT_MIN, "%u", UINT_MAX);
  printf("%-10s %10s %6zu %20ld %20ld %4s %21lu\n", "LONG: ", "%ld", sizeof(long), LONG_MAX, LONG_MIN, "%lu", ULONG_MAX);
  printf("%-10s %10s %5zu %20lld %20lld %4s %21llu\n", "LONG LONG: ", "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, "%llu", ULLONG_MAX);
}