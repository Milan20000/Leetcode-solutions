int maxSubArray(int* nums, int numsSize) {
    int currSum=0;
    int maxSum=INT_MIN;

    for(int i=0;i<numsSize;i++)
    {
        currSum=currSum+nums[i];
        if(currSum>maxSum)
        {
            maxSum=currSum;
        }
        if(currSum<0)
        {
            currSum=0;
        }
    }
    return maxSum;
}