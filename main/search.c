#include <stdio.h>

int *isearch(int key, int *arr, unsigned n)
{
    unsigned i;
    for(i=0; i<n; ++i)
        if(arr[i]==key)
            return arr+i;
    return NULL;
}

int main()
{
    unsigned i;
    int arr[5], key, *found;
    printf("Enter 5 integers:\n");
    for(i=0; i<5; ++i)
        scanf(" %d%*c", arr+i);
    printf("Enter a key to search for:\n");
    scanf(" %d%*c", &key);
    found=isearch(key, arr, 5);
    if(found)
        printf("Found at position: %u\n", found-arr+1);
    else
        printf("Not Found\n");
    return 0;
}
