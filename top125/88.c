#include <stdio.h>

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    if (n == 0)
    {
        return;
    }
    if (m == 0)
    {
        for (int i = 0; i < n; i++)
        {
            nums1[i] = nums2[i];
        }
        return;
    }

    int left[m];
    for (int i = 0; i < m; i++)
    {
        left[i] = nums1[i];
    }

    int i = 0, j = 0, k = 0;
    while (i<m && j<n)
    {
        // printf("check, i=%d/j=%d/k=%d  ",i,j,k);
        // printf("left[i]=%d, n2[j]=%d\n",left[i], nums2[j]);
        if (i == m||left[i]>nums2[j])
        {
            nums1[k++] = nums2[j++];
            // printf("then set %d from right\n",nums2[j-1]);
        }
        else{
            nums1[k++] = left[i++];
            // printf("then set %d from left\n",left[i-1]);
        }
    }

    while(i<m){
        nums1[k++] = left[i++];
    }
    while (j<n){
        nums1[k++] = nums2[j++];
    }
}

int main()
{
    //     nums1 =
    // [1,2,3,0,0,0]
    // m =
    // 3
    // nums2 =
    // [2,5,6]
    // n =
    // 3
    int nums1[6] = {1, 2, 3, 0, 0, 0};
    int nums2[3] = {2, 5, 6};
    merge(nums1, 6, 3, nums2, 3, 3);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", nums1[i]);
    }
    printf("\n");
    return 0;
}