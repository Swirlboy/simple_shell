#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <limits.h>
#include <time.h>

extern char **environ;

int _strcmp(char *str1, char *str2);
int get_path(char **arguments);
int getbuiltins(char **arguments, int exit_stat);
char *_getenv(char *global_var);
char *_strdup(char *str);
char *append_command(char *dir_path, char *command);
int _mprint(const char *prompt, unsigned int size);
void free_mem(char *entry);
int getcmd_inputs(char *entry, char **arguments);
int err_stat(int n);
int p_error(char **arguments, int counter);
int _putchar(char c);
int check_file(char *pathname);
int execute(char **arguments);
void free_grid(char **grid, int heigth);
int _strlen(const char *str);

#endif
