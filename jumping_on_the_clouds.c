#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n ,k,i,e=100;
    scanf("%d %d",&n,&k);
    int c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<n;i+=k)
    {
        if(c[i]==0)
        {
            e--;
        }
        else {
        e-=3;
        }
    } 
    printf("%d",e);
    return 0;
}
