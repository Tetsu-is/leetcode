#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    int x = 0, y = 0;
    int count = 0;
    while(x<numsSize){
        if(nums[x]!= val){
            nums[y] = nums[x];
            x++;
            y++;
            count++;
        }
        else {
            x++;
        }
    }
    return count;
}

int main() {
    int nums[4]={3,2,2,3};
    int val = 3;
    int len = sizeof(nums)/sizeof(int);
    int res = removeElement(nums, len, val);
    printf("res = %d\n", res);
    for(int i = 0; i<len;i++){
        printf("%d,",nums[i]);
    }
    printf("\n");
    return 0;
}