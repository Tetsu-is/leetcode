#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000

// I(1) can be placed before V (5) and X (10) to make 4 and 9.
// X(10) can be placed before L (50) and C (100) to make 40 and 90.
// C(100) can be placed before D (500) and M (1000) to make 400 and 900.

int romanToInt(char *s) // null文字がめんどくさそう
{
    int res = 0;
    int len = strlen(s);
    int temp = 0;
    int x[len];
    for (int i = 0; i < len; i++)
    {
        // printf("%c\n",s[i]);
        if (s[i] == 'I')
        {
            res += 1;
        }
        else if (s[i] == 'V')
        {
            if (i > 0 && s[i - 1] == 'I')
            {
                res += 5 - 2;
            }
            else
            {
                res += 5;
            }
        }
        else if (s[i] == 'X')
        {
            if (i > 0 && s[i - 1] == 'I')
            {
                res += 10 - 2;
            }
            else
            {
                res += 10;
            }
        }
        else if (s[i] == 'L')
        {
            if(i>0&& s[i-1] == 'X'){
                res += 50 - 20;
            }
            else {
                res += 50;
            }
        }
        else if (s[i] == 'C')
        {
            if(i>0&& s[i-1] == 'X'){
                res += 100 - 20;
            }
            else {
                res += 100;
            }
        }
        else if (s[i] == 'D')
        {
            if(i>0 && s[i-1] == 'C'){
                res += 500 - 200;
            }
            else {
                res += 500;
            }
        }
        else if (s[i] == 'M')
        {
            if(i>0 && s[i-1] == 'C'){
                res += 1000 - 200;
            }
            else {
                res += 1000;
            }
        }
    }
    return res;
};

int main()
{
    char input[7] = "MCMXCIV"; // 50, 5, 1, 1, 1
    int res = romanToInt(input);
    printf("%d\n", res);
    return 0;
}