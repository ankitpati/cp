#include <stdio.h>

int main(int argc)
{
    unsigned n, sum;
    if(argc==1){
        printf("Enter a number:\n");
        scanf(" %u%*c", &n);
        printf("Running sum of first %u natural numbers is %u.", n, main(n));
    }
    else{
        sum=argc;
        return argc>2?sum+=main(argc-1):3;
    }
    return 0;
}
