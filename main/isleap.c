#include <stdio.h>

int isleap(unsigned year)
{
    if(!(year%400)) return 1;
    if(!(year%100)) return 0;
    if(!(year%  4)) return 1;
    return 0;
}

int main()
{
    unsigned year;
    printf("Enter year:\n");
    scanf(" %u%*c", &year);
    printf("%u is%s a leap year.", year, isleap(year)?"":" not");
    return 0;
}
