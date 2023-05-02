#include <stdio.h>

char small_to_capital(char c)
{
    char ch = c-32;
    return ch;
}

int main()
{
    char chr;
    scanf("%c", &chr);

    char character = small_to_capital(chr);
    printf("%c", character);
    return 0;
}