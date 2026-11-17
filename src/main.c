#include <stdio.h>
#include <stdlib.h>

void hande_command(void);

int main() {
  hande_command();
  return EXIT_SUCCESS;
}

void hande_command(void) {
  while (1) {
    printf("hande_command\n");
  }
}
