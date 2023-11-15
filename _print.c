#include "shell.h"

void (const char string) {
	write(STDOUT_FILENO, string, strlen(string));
}

write(1, &string, strlen(string))
