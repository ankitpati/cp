#include <stdio.h>

unsigned powuint(unsigned base, unsigned expo)
{
    unsigned ret;
    ret=1;
    while(expo--) ret*=base;
    return ret;
}

int main()
{
    unsigned n;
    int i, r, bk;
    printf("Enter an integer:\n");
    scanf(" %d%*c", &i);
    i=i<0?-i:i;
    n=r=0, bk=i;
    do ++n;
    while(bk/=10);
    do r+=i%10*powuint(10, --n);
    while(i/=10);
    printf("The reversed integer is: %d\n", r);
    return 0;
}
