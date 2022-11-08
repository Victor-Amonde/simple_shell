#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <fcntl.h>

#define PATH_MAX 1024
extern char **environ;

int main(int argc, char *argv[]);

/*used in _realloc.c file*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/*used in _strings.c file*/
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _strlen(const char *s);

/*used in builtin_parser.c file*/
int builtin_parser(char **tokens);

/*used in cd_handler.c file*/
char *_getcwd(void);
int cd_home(void);
int cd_prev(void);
int _cd(char **args);

/*used in ctrl_exit.c file*/
void print_prompt(void);
char *ignore_space(char *str);
void ctrl_c(int signum);
void shell_exit(char **args, char *line);

/*used in envset_unset.c*/
int shell_environ(void);
int _setenv(char *var_name, char *var_value);
char *var_build(char *var_name, char *var_value);
int _unsetenv(char *var_name);

#endif /* MAIN_H */
