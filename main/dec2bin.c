#include <stdio.h>

char *dec2bin(char *buf, unsigned n)
{
    unsigned i, j;
    char tmp;

    i=0;
    do buf[i++]='0'+n%2;
    while(n/=2);
    buf[i]='\0';

    for(j=i-1, i=0; i<j; ++i, --j){
        tmp    = buf[i];
        buf[i] = buf[j];
        buf[j] = tmp;
    }

    return buf;
}

int main()
{
    unsigned n;
    char s[33];
    printf("Enter a number:\n");
    scanf(" %u%*c", &n);
    printf("binary(%u) = %s\n", n, dec2bin(s, n));
    return 0;
}
