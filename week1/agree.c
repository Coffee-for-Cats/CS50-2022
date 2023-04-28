#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Voce aceita? (S ou N)\n");

    if (c == 's' || c == 'S')
    {
        printf("Aceito.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Negado.\n");
    }
}