#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  char flag[] = "verysecretpassword";
  if(strcmp(argv[1], flag) == 0) {
    printf("Correct!\n");
  } else {
    printf("Try Again xP\n");
  }
  return 0;
}
