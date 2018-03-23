#include <cs50.h>
#include <stdio.h>

int square(int n); // prototype. teaser of a function to be implented. gives the compiler a hint of what is to come.

int main(void)
{
    int x = get_int("x: ");
    // printf("%i\n", x * x); DON'T NEED THIS ANYMORE WITH THE FUNCTION
    printf("%i\n", square(x));
}

// square is the name of the function. it takes as input, one value called n. and it returns n * n
// takes input in the () and returns output, an integer
int square(int n)
{
    return n * n;
}