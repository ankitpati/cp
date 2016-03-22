#include <stdio.h>

/* Iterative Factorial */
unsigned i_fac(unsigned n)
{
    unsigned ret;
    for(ret=1; n; --n) ret*=n;
    return ret;
}
/* end of Iterative Factorial */

/* Recursive Factorial */
unsigned r_fac(unsigned n)
{
    unsigned ret;
    ret=n;
    return n?ret*=r_fac(n-1):1;
}
/* end of Recursive Factorial */

unsigned fac(unsigned n)
{
    return r_fac(n);
}

int main()
{
    unsigned n;
    printf("Enter a number:\n");
    scanf(" %u%*c", &n);
    printf("%u! = %u\n", n, fac(n));
    return 0;
}
