#include <stdio.h>
#include <stdlib.h>

int ft_isalpha(char c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}

int main(int argc, char *argv[])
{
    int     ki;
    int     i;
    int     i2;
    int     *t;

    i = 0;
    i2 = 0;
    ki = 0;
    while (argv[1][i] != '\0')
    {
        i++;
        ki++;
    }
    t = (int *)malloc(sizeof(int) * ki);
    while (argv[1][i2])
    {
        if ((int)argv[1][i2] >= 65 && (int)argv[1][i2] <= 90)
            t[i2] = (int)argv[1][i2] % 65;
        if ((int)argv[1][i2] >= 97 && (int)argv[1][i2] <= 122)
            t[i2] = (int)argv[1][i2] % 97;
        i2++;
    }
    i2 = 0;
    i = 0;
    printf("Enter the text for the cipher:\n");
    printf("Cipher text:\n");
    while (argv[2][i] != '\0')
    {
        if ((int)argv[2][i] >= 65 && (int)argv[2][i] <= 90)
            printf("%c", ((((int)argv[2][i] % 65) + t[i2]) % 26) + 65);
        else if ((int)argv[2][i] >= 97 && (int)argv[2][i] <= 122)
            printf("%c", ((((int)argv[2][i] % 97) + t[i2]) % 26) + 97);
        else
            printf("%c", argv[2][i]);
        if (ft_isalpha(argv[2][i]))
        {
            if (i2 == ki - 1)
              i2 = 0;
            else
              i2++;
        }
        i++;
    }
    printf("\n");
    return (1);
}