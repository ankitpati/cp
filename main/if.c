#include <stdio.h>

int main()
{
    unsigned marks;
    printf("Enter marks out of 100:\n");
    scanf(" %u%*c", &marks);
    if(marks>=40) printf("Pass!\n");
    else printf("Fail!\n");
    return 0;
}
