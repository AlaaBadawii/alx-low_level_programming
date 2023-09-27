#include <stdio.h>
#include <math.h>

int is_prime(int n) {
  if (n <= 1) {
    return 0;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int largest_prime_factor(long long int n) {
  int largest_prime_factor = 1;
  while (n % 2 == 0) {
    largest_prime_factor = 2;
    n /= 2;
  }
  for (int i = 3; i * i <= n; i += 2) {
    while (n % i == 0) {
      largest_prime_factor = i;
      n /= i;
    }
  }
  if (n > 2) {
    largest_prime_factor = n;
  }
  return largest_prime_factor;
}

int main() {
  long long int n = 612852475143;
  int largest_prime_factor = largest_prime_factor(n);
  printf("%d\n", largest_prime_factor);
  return 0;
}
