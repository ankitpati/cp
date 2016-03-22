#include <stdio.h>

unsigned isprime(unsigned n)
{
    unsigned i, m;
    switch(n){
    case 0: /* intended fall-through */
    case 1:
        return 0;
        break;
    default:
        for(i=2, m=n/2; i<=m && n%i; ++i);
        break;
    }
    return i>m?1:0;
}

int main()
{
    unsigned n;
    printf("Enter a number:\n");
    scanf(" %u%*c", &n);
    printf("%u is %sprime\n", n, isprime(n)?"":"not ");
    return 0;
}
