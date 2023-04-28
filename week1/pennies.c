//não, não são pênis, são uma moeda!
#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float amount = get_float("Quantidade de Dolares: ");
    int pennies = round(amount * 100);
    printf("Pennies: %i\n", pennies);
}