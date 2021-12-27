#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void leftRotation(long int arr[], long int n, long int d)
{
    for(int i = 0; i < n; i++)
    {
        printf("%ld ",arr[(i + d) % n]);
    }
}

int main()
{
    long int n, d;
    scanf("%ld %ld",&n, &d);
    long int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%ld",&arr[i]);
    }
    leftRotation(arr, n, d);
    return 0;
}
