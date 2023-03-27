#include <stdio.h>
int main() {
  int count = 0;
  int current = 1;
  int prevent = 1;
  for (int i = 1; i <= 20; i++) {
  
    printf("%-12d%-12d\n", prevent, current);
    int count = current + prevent;
    current = count + current;
    prevent = count;
  }
}