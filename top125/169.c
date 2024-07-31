#include <stdio.h>

int majorityElement(int *nums, int numsSize)
{
    int candidate = 0;
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
        }
        count += (nums[i] == candidate)? 1:-1;
    }
    return candidate;
}

int main()
{
    int arr[7] = {-1, 1, 1, 3, 3, 44, 3};
    int x = 7;
    int ret = majorityElement(arr, x);
    printf("%d\n", ret);
    return 0;
}