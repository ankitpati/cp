#include <stdio.h>

int main()
{
    unsigned n;
    char r[11];
    int i;
    printf("Enter an integer:\n");
    scanf(" %d%*c", &i);
    i=i<0?-i:i;
    n=0;
    do r[n++]='0'+i%10;
    while(i/=10);
    r[n]='\0';
    printf("The reversed integer is: %s\n", r);
    return 0;
}
