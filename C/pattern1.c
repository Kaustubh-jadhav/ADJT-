#include <stdio.h>
int main() {
  int i, j, k = 9, t = 2;
  for (i = 0; i < 5; i++) {
    k = 9;
    t = 2;
    for (j = 0; j < i; j++) {
      printf("%d", k);
      k = k - t;
      t = t + 1;
    }
    printf("\n");
  }
  return 0;
}
/*
9
97
974
9740
*/