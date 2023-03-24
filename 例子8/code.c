#include <stdio.h>
#include <stdbool.h>

int main() {
  for (int i = 0; i < 8; i++) {
    bool odd_col = i % 2 == 0 ? true : false;
    for (int j = 0; j < 8; j++) {
      if (odd_col) {
        printf("%c%c", 219, 219);
      } else {
        printf("  ");
      }
      odd_col = !odd_col;
    }
    printf("\n");
  }
}