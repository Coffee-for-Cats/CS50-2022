//#include <stdlib.h>
#include <cs50.h>
#include <stdio.h>

//using namespace std;

int main(void)
{
    string answer = get_string("Qual o seu nome? ");
    //"%s" adiciona uma variável, e ela é adicionada como um segundo parâmetro em printf.
    //"\n" quebra a linha
    //"!" é parte da frase
    printf("Oi, %s!\n", answer);

    //printf("Oi, %s!\n", get_string("Qual o seu nome? ")); -> isso é possível, funciona, mas é um desing pior.
}