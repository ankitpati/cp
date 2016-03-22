#include <stdio.h>

int main()
{
    unsigned i, stud[4][2];
    printf("Enter roll number and marks:\n");
    for(i=0; i<4; ++i)
        scanf(" %u %u%*c", &stud[i][0], &stud[i][1]);
    printf("Roll\tMarks\n");
    for(i=0; i<4; ++i)
        printf("%u\t%u\n", stud[i][0], stud[i][1]);
    return 0;
}
