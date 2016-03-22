#include <stdio.h>

int dret()
{
    int a=43;
    return a-=1, a+=5;
}

int main()
{
    printf("%d\n", dret());
    return 0;
}
