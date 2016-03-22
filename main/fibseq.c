#include <stdio.h>

unsigned fibseq(unsigned n)
{
    unsigned x, y, t;
    switch(n){
    case 0: /* intended fall-through */
    case 1:
        return 0;
        break;
    case 2:
        return 1;
        break;
    default:
        for(n-=2, x=0, y=1; n; --n){
            t =y;
            y+=x;
            x =t;
        }
        break;
    }
    return y;
}

int main()
{
    unsigned n, i;
    printf("Enter a number:\n");
    scanf(" %u%*c", &n);
    printf("Fibonacci sequence follows:\n");
    for(i=1; i<=n; ++i)
        printf("%u \n", fibseq(i));
    return 0;
}
