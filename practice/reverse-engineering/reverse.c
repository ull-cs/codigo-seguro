#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("Incorrect usage. Try: ./EXECUTABLE PASSWORD\n");
    exit (EXIT_FAILURE);
  }
  char flag[] = "verysecretpassword";
  if (strcmp(argv[1], flag) == 0) {
    printf("Correct password!\n");
  } else {
    printf("Incorrect password!\n");
  }
  return 0;
}
