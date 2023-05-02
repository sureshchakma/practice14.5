#include <stdio.h>
char capital_to_small(char ch){
    char chr = ch + 32;
    return chr;
}
int main()
{
    char ch;
    scanf("%c", &ch);

    ch = capital_to_small(ch);
    printf("%c", ch);
    return 0;
}