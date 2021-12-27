#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,m,s,res;
    int t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&m,&s);
        res=(m+s-1)%n;
        if(res==0)
        {
            printf("%d\n",n);
        }
        else {
        printf("%d\n",res);
        }
    }
    return 0;
}
