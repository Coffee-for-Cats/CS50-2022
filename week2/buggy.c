#include <cs50.h>
#include <stdio.h>

int get_negative_int(void);

int main(void)
{
    int i = get_negative_int();

    printf("%i\n", i);

    // for (int i = 0; i < 3; i++)
    // {
    //     //printf("i is %i\n", i);
    //     printf("#\n");
    // }
}

int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("Escreva um numero negativo inteiro: ");
        printf("n e: %i \n", n);
    } while (n < 0);
    return n;
}