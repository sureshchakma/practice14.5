#include <stdio.h>

int char_to_ascii(char chr)
{
    int  ch = chr;
    return ch;
}

int main()
{
    char cc;
    scanf("%c", &cc);
    int asci = char_to_ascii(cc);
    printf("%d\n", asci);
    return 0;
}