#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("n: ");

    //Se o número for par...
    if (n % 2 == 0)
    {
        printf("O numero e par!\n");
    }
    else
    {
        printf("O numero é impar!\n");
    }
}