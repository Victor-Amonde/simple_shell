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

#endif /* MAIN_H */
