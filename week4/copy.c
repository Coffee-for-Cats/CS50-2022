#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");
    int size = strlen(s) + 1; //+1 because of the null character of strings.

    char *t = malloc(size);

    if (t == NULL) {
        return 1;
    }
    strcpy(t, s);

    if (size - 1 > 0) {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
}