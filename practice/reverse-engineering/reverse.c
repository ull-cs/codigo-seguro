#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  char flag[] = "verysecretpassword";
  if(strcmp(argv[1], flag) == 0) {
    printf("Correct password!\n");
  } else {
    printf("Incorrect password. Try again\n");
  }
  return 0;
}
