#include <stdio.h>

int *linsrch(int key, int *arr, unsigned siz)
{
    while(siz--)
        if(arr[siz]==key)
            return arr+siz;
    return NULL;
}

int main()
{
    unsigned i, n;
    int set[100], key, *pos;
    printf("Enter number of elements in the set:\n");
    scanf(" %u%*c", &n);
    printf("Enter %u integers:\n", n);
    for(i=0; i<n; ++i)
        scanf(" %d%*c", set+i);
    printf("Enter element to search for:\n");
    scanf(" %d%*c", &key);
    pos=linsrch(key, set, n);
    if(pos)
        printf("Element found at position %u. (Starting from 0.)\n", pos-set);
    else
        printf("Element not found.\n");
    return 0;
}
