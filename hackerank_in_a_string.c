#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int q;
    char str[10000], word[] = "hackerrank";
    scanf("%d",&q);
    for(int i = 0; i < q; i++)
    {
        scanf("%s",str);
        int res = 0;
        for(int j = 0; j < strlen(str); j++)
        {
            if(res < strlen(word) && word[res] == str[j])
            {
                res++;
            }
        }
        if(res == strlen(word))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return  0;
}
