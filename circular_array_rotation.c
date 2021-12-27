#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, q, t;
    scanf("%d %d %d",&n, &k, &q);
    int r = k % n;
    int arr[n];
    for(int i = r; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < r; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < q; i++)
    {
        scanf("%d",&t);
        printf("%d\n",arr[t]);
    }
    return 0;
}