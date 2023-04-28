#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number_of_scores = get_int("Quantas notas voce quer fazer a media? ");

    int scores[number_of_scores];

    for (int i = 0; i < number_of_scores; i++)
    {
        scores[i] = get_int("Nota %i: ", i + 1);
    }

    //Gets the media of the array of scores.
    int sum = 0;
    for (int i = 0; i < number_of_scores; i++)
    {
        sum += scores[i];
    }
    float media = sum / number_of_scores * 1.0;

    //Prints the result
    printf("Media: %.2f \n", media);
}