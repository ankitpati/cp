#include <stdio.h>

int main()
{
    unsigned n, i;
    printf("Enter a number:\n");
    scanf(" %u%*c", &n);
    for(i=1; i<=10; ++i)
        printf("%u x %.2u = %.2u\n", n, i, n*i);
    return 0;
}
