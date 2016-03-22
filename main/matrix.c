#include <stdio.h>

void matdisp(int m[][80], unsigned r, unsigned c)
{
    unsigned i, j;
    for(i=0; i<r; ++i){
        for(j=0; j<c; ++j)
            printf("% 5d ", m[i][j]);
        putchar('\n');
    }
    putchar('\n');
    return;
}

void matcpy(int m1[][80], unsigned r1, unsigned c1, int m2[][80], unsigned r2, unsigned c2)
{
    unsigned i, j;
    for(i=0; i<r2; ++i)
        for(j=0; j<c2; ++j)
            m1[i][j]=m2[i][j];
    return;
}

void matrecv(int m[][80], unsigned r, unsigned c)
{
    unsigned i, j;
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
            scanf(" %d%*c", &m[i][j]);
    return;
}

void mattrn(int m[][80], unsigned r, unsigned c)
{
    unsigned i, j;
    int t[80][80];
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
            t[j][i]=m[i][j];
    matcpy(m, r, c, t, c, r);
    return;
}

void matadd(int m1[][80], unsigned r1, unsigned c1, int m2[][80], unsigned r2, unsigned c2)
{
    unsigned i, j;
    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j)
            m1[i][j]+=m2[i][j];
    return;
}

void matsub(int m1[][80], unsigned r1, unsigned c1, int m2[][80], unsigned r2, unsigned c2)
{
    unsigned i, j;
    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j)
            m1[i][j]-=m2[i][j];
    return;
}

void matmul(int m1[][80], unsigned r1, unsigned c1, int m2[][80], unsigned r2, unsigned c2)
{
    unsigned i, j, k;
    int a[80][80];
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            for(k=0; k<c2; ++k)
                a[i][j]+=m1[i][k]*m2[k][j];

    return;
}

int main(int argc, char **argv)
{
    int m1[3][80], m2[3][80], t1[3][80], t2[3][80];

    printf("Enter values of two 3x3 matrices:\n");
    matrecv(m1, 3, 3);
    putchar('\n');
    matrecv(m2, 3, 3);

    matcpy(t1, 3, 3, m1, 3, 3);
    mattrn(t1, 3, 3);
    printf("\nTranspose:\n");
    matdisp(t1, 3, 3);

    matcpy(t1, 3, 3, m1, 3, 3);
    matcpy(t2, 3, 3, m2, 3, 3);
    matadd(t1, 3, 3, t2, 3, 3);
    printf("\nAddition:\n");
    matdisp(t1, 3, 3);

    matcpy(t1, 3, 3, m1, 3, 3);
    matcpy(t2, 3, 3, m2, 3, 3);
    matsub(t1, 3, 3, t2, 3, 3);
    printf("\nSubtraction:\n");
    matdisp(t1, 3, 3);

    return 0;
}
