#include <stdio.h>
int main() {
  int count = 0;
  for(int n = 1; n < 5; n++) {
    for(int i = 1; i < 5; i++) {
      for (int k = 1; k < 5; k++) {
        if (n != i && i != k && k != n) {
          printf("%d,%d,%d\n", n, i, k);
          count++;
        }
      }
    }
  }
  printf("count: %d\n", count);
}