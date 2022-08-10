#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#define GETLINE_MINSIZE 16

int print_prompt(void);
char *get_input(ssize_t *num_read);
char** tokenize(char *line_read, ssize_t num_read);
int execution(char **tokens);
void commands(char **args);
char *_which(char *command);

// get line protype
int _getline(char **lineptr, size_t *n, FILE *fp);

/* global environment variables */
extern char **environ;

/* struct for built-in commands */
struct builtin {
    char *name;
    void (*func)(char **args);
};

/* prototype for functions relating to built-in commands */
void hsh_exit(char **args);
void hsh_cd(char **args);
void hsh_help(char **args);
void hsh_env(char **args);

#endif
