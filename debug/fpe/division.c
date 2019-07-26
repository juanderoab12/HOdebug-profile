#include <stdlib.h>
#include <stdio.h>
#ifdef TRAPFPE
#include "fpe_x87_sse/fpe_x87_sse.h"
#endif

int main(int argc, char *argv[])
{
  float a, b, c;

#ifdef TRAPFPE
  set_fpe_x87_sse();

#endif

  printf("Division\n");
  printf("Insert a\n");
  scanf("%f",&a);
  printf("Insert b\n");
  scanf("%f",&b);

  printf("Calculating a/b...");
  c = a / b;
  printf("Done!\n");

  printf("c = a/b = %f\n", c);
  return(EXIT_SUCCESS);
}
