#include "shell.h"

int main()
{


    char *buffer;

    printf("$ ");
    _getline(*buffer);
    printf("%s", buffer);

    return 0;
}
