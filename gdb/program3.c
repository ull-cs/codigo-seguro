#include <stdio.h>

int suma(int a, int b) {
  return a + b;
}

int main(int argc, const char * argv[]) {
  printf("Hola: %s\n", argv[1]);
  printf("La suma es: %d\n", suma(2, 3));
  return 0;
}
