#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers:\n");
    scanf(" %d %d%*c", &a, &b);
    printf("%d (%c) > %d (%c)\n", a>b?a:b, a>b?'a':'b', a>b?b:a, a>b?'b':'a');
    return 0;
}
