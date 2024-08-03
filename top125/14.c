#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
    if (strsSize == 0)
    {
        return "";
    }
    if (strsSize == 1)
    {
        return strs[0];
    }
    char *res = (char*)malloc(200*sizeof(char));
    int len = strlen(strs[0]);
    int tail = 0;
    for (int i = 0; i < len; i++)
    {
        // printf("start with %c\n",strs[0][i]);
        for (int j = 1; j < strsSize; j++)
        {
            // printf("cmp %c,%c\n", strs[0][i],strs[j][i]);
            if (strs[0][i] != strs[j][i]||i>=strlen(strs[j]))
            {
                res[tail]='\0';
                return res;
            }
        }
        res[tail] = strs[0][i];
        tail++;
    }
    res[tail]='\0';
    return res;
}

int main()
{
    char *flower="flower";
    char *flow = "flow";
    char *flight="flight";
    char*list[3] = {flower, flow, flight};
    char*res = longestCommonPrefix(list,3);
    printf("%s", res);
    free(res);
    return 0;
}