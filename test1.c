#include <stdio.h>

int main(void)
{
    char *string = "Hello";

    string[0] = 'c';

    printf("%s\n", string);
}