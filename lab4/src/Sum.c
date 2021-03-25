#include "Sum.h"
#include <stdio.h>

int Sum(const struct SumArgs *args) {
  int sum = 0;
  printf("begin: %d end: %d\n", args->begin, args->end);

  for(int i=args->begin;i<args->end;i++)
        {
            printf("%d \n", *(args->array+i));
            sum+=*(args->array+i);
        }
  return sum;
}