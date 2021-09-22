#include <stdio.h>
#include "headers/max.h"

int main(int argc, char const *argv[]) {

  int zahl[3];

  for (size_t i = 0; i < 3; i++) {

    scanf("%d[^\n]", &zahl[i]);
  }

  int result = max(zahl[0],zahl[1],zahl[2]);

  printf("The result is: %d\n", result);

  return 0;
}
