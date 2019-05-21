#include <stdio.h>

void    print_bits(int count)
{
    int del;

    del = 128;
    if (count >= 48 && count <= 57)
    {
        del = 8;
        count -= 48;
    }
    while (count != 0 || del != 0)
    {
        if (count / del == 1)
            printf("1");
        else
            printf("0");
        count %= del;
        del /= 2;
    }
    printf(" ");
}

int     main(int argc, char *argv[])
{
    int i;
    int count;

    i = 0;
    if (!argv[1])
        return (1);
    while (argv[1][i])
    {
        print_bits((int)argv[1][i]);
        i++;
    }
    printf("\n");
    return (0);
}