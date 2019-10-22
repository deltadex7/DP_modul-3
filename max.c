#include <stdio.h>

int* maxmin(int n, int* arr);

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int *mm;
    mm = maxmin(n, arr);

    printf("max = %d\nmin = %d\n", mm[0], mm[1]);
    
    return 0;
}

int* maxmin(int n, int* arr)
{
    // max-min array
    static int mm[2];
    mm[0] = mm[1] = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mm[0]) {
            mm[0] = arr[i];
            continue;
        } 
        
        if (arr[i] < mm[i]) {
            mm[1] = arr[i];
            continue;
        }
        
    }
    
    return mm;
}