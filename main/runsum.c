#include <stdio.h>

unsigned runsum(unsigned n)
{
    unsigned sum=n;
    return n?sum+=runsum(--n):0;
}

int main()
{
    unsigned n;
    printf("Enter a number:\n");
    scanf(" %u%*c", &n);
    printf("Running sum of first %u natural numbers is %u.", n, runsum(n));
    return 0;
}
