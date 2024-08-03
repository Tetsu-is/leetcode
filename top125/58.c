#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int lengthOfLastWord(char* s) {
    int length = strlen(s);
    int idx = length - 1;
    int count = 0;

    // printf("%c\n",s[idx]);

    while(idx>=0){
        // printf("%c-->",s[idx]);
        if(s[idx] != ' '){
            count++;
            idx--;
        }
        else if(s[idx] == ' ' && count == 0){
            idx--;
        }
        else {
            break;
        }

    }
    return count;
}

int main() {
    int res = lengthOfLastWord("a");
    printf("%d\n",res);
    return 0;
}