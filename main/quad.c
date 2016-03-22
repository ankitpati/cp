#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    int sig;
    printf("a x^2 + bx + c = 0\n");
    printf("Enter a, b, c\n");
    scanf(" %lf %lf %lf%*c", &a, &b, &c);
    c=b*b-4*a*c;
    b=-b/(2.0*a);
    c=(sig=c<0?1:0)?sqrt(-c)/(2*a):sqrt(c)/(2*a);
    if(sig)
        printf("x = %lf + %lfi, %lf - %lfi\n", b, c, b, c);
    else
        printf("x = %lf, %lf\n", b+c, b-c);
    return 0;
}
