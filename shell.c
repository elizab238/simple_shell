#include "shell.h"


int main(void)
{
	char *input, **token;
	ssize_t num_read;
	int return_code = 0;

	while(1)
	{
		print_prompt();

		input = get_input(&num_read);

		if(num_read == -1)
		{
			printf("exiting shell....");
			exit(1);
		}

		token = tokenize(input, num_read);

		if(token[0] != NULL)
		{
			return_code = execution(token);
		}

		free(token);
		free(input);
	}

	return (return_code);
}
