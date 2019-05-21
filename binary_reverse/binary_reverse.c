#include <stdio.h>

int     main(int argc, char *argv[])
{
    int i;
    int del;
    int letter;

    letter = 0;
    i = 0;
    del = 128;
    if (!argv[1])
        return (1);
    while (argv[1][i])
    {
        if (argv[1][i] == '1')
            letter += del;
        i++;
        del /= 2;
        if (argv[1][i] == ' ' || argv[1][i] == '\0')
        {
            printf ("%c", letter);
            i++;
            del = 128;
            letter = 0;
        }
    }
    printf("\n");
    return (0);
}