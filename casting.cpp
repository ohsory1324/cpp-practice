#include <iostream>

int main()
{
  char sz[] = { 0x61, 0x62, 0x63, 0x00 };
  int a = *((int*) sz);
  printf("%s\n", sz);
  printf("%08X\n", a);

  char sz2[] = "abc";
  int b = *((int*) sz);
  printf("%08X\n", b);

  char sz3 = 'a';
  int c = sz3;
  printf("%08X\n", c);
  return 0;
}