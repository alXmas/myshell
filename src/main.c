#include <stdio.h>
#include <stdlib.h>

void hande_command(void);
char *read_line(void);

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


#define INPUT_BUFSIZE 1024
char *read_line(void)
{
  int bufsize = INPUT_BUFSIZE;
  int position = 0;
  char *buffer = malloc(sizeof(char) * bufsize);
  int c;

  if (!buffer) {
    fprintf(stderr, "myshell: allocation error\n");
    exit(EXIT_FAILURE);
  }

  while (1) {
    c = getchar();

    if (c == EOF || c == '\n') {
      buffer[position] = '\0';
      return buffer;
    } else {
      buffer[position] = c;
    }
    position++;

    if (position >= bufsize) {
      bufsize += INPUT_BUFSIZE;
      buffer = realloc(buffer, bufsize);
      if (!buffer) {
        fprintf(stderr, "myshell: allocation error\n");
        exit(EXIT_FAILURE);
      }
    }
  }
}
