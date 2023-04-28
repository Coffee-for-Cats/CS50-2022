#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s \n", argv[1]);
    }
    else
    {
        printf("Voce escreveu um argumento a mais! \n");
    }
}