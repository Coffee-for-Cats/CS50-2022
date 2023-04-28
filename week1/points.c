#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int MINE = 2;
    int points = get_int("How many points did you lose?\n ");

    if (points < MINE)
    {
        printf("Voce perdeu menos pontos do que eu.\n ");
    }
    else if (points > MINE)
    {
        printf("Voce perdeu mais pontos do que eu.\n ");
    }
    else
    {
        printf("Voce perdeu a mesma quantidade de pontos que eu.\n");
    }
}