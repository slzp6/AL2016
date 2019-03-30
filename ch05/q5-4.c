/* code: q5-4.c   (v1.16.00) */
#include <stdio.h>

void foo (int n)
{
  if (n < 15) {
    foo (n + 1);
    printf ("%d ", n);
  }
}

int main ()
{

  foo (0);

  return 0;
}
