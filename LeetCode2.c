#include<stdio.h>
int searchInsert(int* nums, int numsSize, int target);
int main()
{
    int nums[]={1,2,3,4};
    printf("%d",searchInsert(nums,4,5));
    printf("\n");
    return 0;
}
int searchInsert(int* nums, int numsSize, int target) {
    int i;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
            return i;
        }
        else if(nums[i]>target)
        {
            return i;
        }
    }
    return numsSize;
}