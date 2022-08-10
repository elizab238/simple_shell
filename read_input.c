#include "shell.h"

char *get_input(ssize_t *num_read)
{
	char *buffer = NULL;
	size_t n = 0;
	
	*num_read = _getline(&buffer, &n, stdin);
	
	return (buffer);
}
