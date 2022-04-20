#include "shell.h"

char **tkn(char *str, char *lim)
{
    char **cmd = NULL;
    int wrd = contador(str), i = 1;

    cmd = malloc(sizeof(char *) * (wrd + 1));
    if (cmd == NULL)
    {
        perror("Failing memory");
        return (NULL);
    }
    cmd[0] = strtok(str, lim);
    if (cmd[0] == NULL)
    {
        return (NULL);
    }
    while (i < (wrd + 1))
    {
        cmd[i] = strtok(NULL, lim);
        i++;
    }
    return (cmd);
}
