void bubble_sort(int *nums, int numsSize)
{
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=0;j<numsSize-1-i;j++)
        {
            if(nums[j]>nums[j+1])
            {
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
}


int missingNumber(int* nums, int numsSize) {
    bubble_sort(nums,numsSize);
    int result;

    for(int i=0;i<numsSize;i++)
    {
        if(i!=nums[i])
        {
            return i;
        }
       
    }
     return numsSize;
}