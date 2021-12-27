#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funnyString(char str[], char rev[])
{
    int len = strlen(str);
    char outcome[10];
    int arrDiff[len - 1], revDiff[len - 1];
    for(int i = 0; i < len; i++)
    {
        arrDiff[i] = str[i+1] - str[i];
        revDiff[i] = rev[i] - rev[i+1];
    }
    int flag = 0;
    for(int i = 0; i < len - 1; i++)
    {
        if(arrDiff[i] != revDiff[i])
        {
            flag = 1;
        }
    }
    if(flag == 1)
        printf("Not Funny\n");
    else 
        printf("Funny\n");
}

int main()
{
    int q;
    char str[10000], rev[10000];
    scanf("%d",&q);
    for(int i = 0; i < q; i++)
    {
        scanf("%s",str);
        int n = strlen(str);
        int cur = n - 1;
        for(int j = 0; j < n; j++)
        {
            rev[cur] = str[j];
            cur--;
        }
        funnyString(str, rev);
    }
    return 0;
}