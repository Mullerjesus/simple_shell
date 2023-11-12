#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

extern char **environ;

void execute_command(char *command);
void handle_exit(void);
void handle_env(void);
void handle_cd(char *path);
int count_arguments(char *line);
char **tokenize(char *line);
void free_tokens(char **tokens);

#endif /* SHELL_H */

