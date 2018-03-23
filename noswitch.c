#include <cs50.h>
#include <stdio.h>

int main (void)
{
    char c = get_char("Answer: ");

    if (c == 'Y' || c == 'y') // uses single quotes for single characters. double quotes for multiple
    {
        printf("yes\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("no\n");
    }

}