#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define MAX_INPUT_SIZE 1024
#define MAX_TOKEN_SIZE 64
#define MAX_NUM_TOKENS 64

/**
* Parses the input line into tokens.
*
* This func takes an input line & tokenizes based on space, tab, and newline.
*
* @param line   The input line to be parsed.
* @param tokens An array to store the resulting tokens.
*/
void parse_input(char *line, char **tokens)
{
int i = 0;
tokens[i] = strtok(line, " \n\t");
while (tokens[i] != NULL && i < MAX_NUM_TOKENS)
{
tokens[++i] = strtok(NULL, " \n\t");
}
}

int main(void)
{
char *tokens[MAX_NUM_TOKENS];
char line[MAX_INPUT_SIZE];
int status;
while (1)
{
printf("simple_shell$ ");
if
(!fgets(line, MAX_INPUT_SIZE, stdin)) break;
parse_input(line, tokens);

pid_t pid = fork();
if (pid == -1)
{
printf("fork failed\n");
exit(1);
}
else if (pid == 0)
{
execvp(tokens[0], tokens);
printf("command not found\n");
exit(1);
}
}
else
{
waitpid(pid, &status, 0);
}
}
return (0);
}
