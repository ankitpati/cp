#include <stdio.h>

int iseven(unsigned n)
{
    return !(n%2);
}

int isodd(unsigned n)
{
    return n%2;
}

int main()
{
    unsigned n;
    printf("Enter a number:\n");
    scanf(" %u%*c", &n);
    printf("%u is %s.\n", n, isodd(n)?"odd":"even");
    return 0;
}
