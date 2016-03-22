#include <stdio.h>

int main()
{
    unsigned i;
    int s[]={43, 54, 65, 76, 87};
    for(i=0; i<5; ++i)
        printf("Element index  : %u\nElement address: %p\n", i, s+i);
    return 0;
}
