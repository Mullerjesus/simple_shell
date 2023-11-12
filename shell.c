#include "shell.h"

int main(void) {
char *input = NULL;
size_t len = 0;

while (1) {
printf("($) ");
if (getline(&input, &len, stdin) == -1) {
handle_exit();
}

execute_command(input);

free(input);
input = NULL;
}

return 0;
}

void execute_command(char *command) 
{
/* Implement the logic to execute the command using execve
* Handle errors
* ...*/
}

void handle_exit(void) 
{
printf("\n");
exit(EXIT_SUCCESS);
}

void handle_env(void) 
{
/* Implement the logic to print the current environment
* ...*/
}

void handle_cd(char *path) 
{
/* Implement the logic to print the current environment
* ...*/
}

int count_arguments(char *line)
{
/*  Implement the logic to count arguments in a command line
* .........*/
}

char **tokenize(char *line) 
{
/*  Implement the logic to tokenize a command line
*.......*/
}

void free_tokens(char **tokens) 
{
/* Implement the logic to free memory allocated for tokens
*..... ...*/
return (0);
}
