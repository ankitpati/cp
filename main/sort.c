#include <stdio.h>

int *isort(int *arr, unsigned n)
{
    unsigned i, j, small;
    int temp;
    for(i=0; i<n; ++i){
        small=i;
        for(j=i; j<n; ++j)
            if(arr[j]<arr[small])
                small=j;
        temp       = arr[small];
        arr[small] = arr[i];
        arr[i]     = temp;
    }
    return arr;
}

int *b_isearch(int key, int *arr, unsigned n)
{
    unsigned high, low, mid;
    low=0, high=n-1;
    while(low<=high){
        mid=low+(high-low)/2;
        switch(arr[mid]==key){
        case 0:
            arr[mid]<key?(low=mid+1):(high=mid-1);
            break;
        case 1:
            return arr+mid;
            break;
        }
    }
    return NULL;
}

int main()
{
    unsigned i;
    int arr[5];
    printf("Enter 5 integers:\n");
    for(i=0; i<5; ++i)
        scanf(" %d%*c", arr+i);
    isort(arr, 5);
    for(i=0; i<5; ++i)
        printf("%d ", arr[i]);
    putchar('\n');
    return 0;
}
