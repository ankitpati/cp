#include <stdio.h>
#include <stdlib.h>

void getset(int *set, unsigned siz)
{
    unsigned i;
    for(i=0; i<siz; ++i)
        scanf(" %d%*c", set+i);
    return;
}

void unione(int *s, unsigned n, int *t, unsigned m, int *r)
{
    unsigned i;
    for(
}

int main()
{
    unsigned n, m;
    int s[100], t[100], r[200];

    printf("Enter number of elements in set s:\n");
    scanf(" %u%*c", &n);
    printf("Enter %u integers:\n", n);
    getset(s, n);

    printf("Enter number of elements in set t:\n");
    scanf(" %u%*c", &m);
    printf("Enter %u integers:\n", m);
    getset(t, m);

    return 0;
}
