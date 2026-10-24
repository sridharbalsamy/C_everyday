// -------- Program to find the factorial of a number ---------------

#include <stdio.h>

int facto(int n)
{
  if (n == 0)
    return 1;

  return n * facto(n - 1);
}

int main()
{

  int num = 5;
  printf("%d", facto(num));
  return 0;
}
