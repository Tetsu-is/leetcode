#include <stdio.h>
#include <string.h>

int strStr(char *haystack, char *needle)
{
    // needleの先頭が一致するまでスキップ
    // needleの先頭が一致したらneedleの全て一致するかチェックしていく
    // haystack = "sadbutsad"9, needle = "sad"3
    // index -> 0-6 = 9-3

    size_t len = strlen(haystack);
    size_t nlen = strlen(needle);

    if(len == 1 && nlen == 1){
        if(haystack[0] == needle[0]){
            return 0;
        }
        else {
            return -1;
        }
    }

    if(len < nlen) {
        return -1;
    }

    int index = 0;

    for (index = 0; index <= len - nlen; index++)
    {
        printf("match %c & %c ??\n", haystack[index], needle[0]);
        if (haystack[index] == needle[0])
        {
            for (int j = 0; j < nlen; j++)
            {
                if (haystack[index + j] != needle[j])
                {
                    break;
                }
                if(j == nlen-1){
                    return index;
                }
            }
        }
    }
    return -1;
}

int main()
{
    printf("hello\n");
    char heystack[] = "abc";
    char needle[] = "c";
    int res = strStr(heystack, needle);
    printf("res = %d\n", res);
    return 0;
}