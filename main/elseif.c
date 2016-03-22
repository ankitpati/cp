/*
 * The marks obtained by a student in  five different subjects are input through
 * the keyboard. The student gets a division as per the following rules.
 *
 * >= 60%     -- 1st division
 * 50% to 59% -- 2nd division
 * 40% to 49% -- 3rd division
 * < 40%      -- Fail
 *
 * Write a program to calculate the divisions obtained by students.
 */

#include <stdio.h>

int main()
{
    float marks[5], total;
    unsigned i;
    printf("Enter 5 marks, each out of 100:\n");
    for(i=0; i<5; ++i) scanf(" %f%*c", marks+i);
    for(i=0; i<5; ++i) total+=marks[i];
    total/=5;
    if(total>=60) printf("1st division\n");
    else if(total>=50) printf("2nd division\n");
    else if(total>=40) printf("3rd division\n");
    else printf("Fail\n");
    return 0;
}
