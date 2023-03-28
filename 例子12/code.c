#include <stdio.h>
#include <stdbool.h>

bool is_prime_fn(int num) {
  bool is_prime = true;
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      is_prime = false;
      break;
    }
  }
  return is_prime;
}

int main() {
   for (int n = 100; n < 200; n++) {
    if (is_prime_fn(n)) {
      printf("%d\n", n);
    }
   }
}



