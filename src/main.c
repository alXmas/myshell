#include <stdio.h>
#include <stdlib.h>

void hande_command(void);

int main() {
  hande_command();
  return EXIT_SUCCESS;
}

void hande_command(void) {
  char *line;
  int status;

  do {
    printf("> ");
    line = read_line();

    free(line);
  } while (status);
}
