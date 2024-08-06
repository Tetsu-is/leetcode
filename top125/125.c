#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char *s)
{
    int i = 0;
    size_t len = strlen(s);

    if(len == 1){
        return true;
    }

    char new[len+10];
    int idx = 0;

    for(int i = 0; i<len; i++){
        if ((48<=s[i] && s[i] <= 57) || (65 <= s[i] && s[i] <= 90))
        {
            char x = s[i] + 32;
            new[idx] = x;
            new[idx+1] = '\0';
            idx++;
        }
        else if((97<= s[i] && s[i]<=122)){
            char x = s[i];
            new[idx] = x;
            new[idx+1] = '\0';
            idx++;
        }
        else{
            printf("exception %c\n",s[i]);
        }
    }
    size_t nl = strlen(new);
    if(nl == 0){
        return true;
    }
    // printf("converted\n");
    // for(int i = 0; i<nl; i++){
    //     printf("%c ", new[i]);
    // }
    // printf("\n");
    for(int i = 0; i<nl/2; i++){
        printf("comp %c == %c ?? \n", new[i] , new[nl-i-1]);
        if(new[i] != new[nl-i-1]){
            return false;
        }
    }
    return true;
}

int main()
{
    // printf("hello\n");
    // printf("%d\n", ',');
    char s[] = "Marge, let's \"[went].\" I await {news} telegram.";
    bool res = isPalindrome(s);
    if(res == true){
        printf("true\n");
    }
    else {
        printf("false\n");
    }
    
    printf("%d\n", s[0]);
    // printf("%d\n", '9');
    return 0;
}