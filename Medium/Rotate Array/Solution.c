int *rotate(int* nums, int numsSize, int k){
    int i = 0;
    int j = 0;
    int *NewArr =(int *)malloc(sizeof(int) * numsSize +1);
    if (k >= numsSize)
        k = k - numsSize;
    if (k >= numsSize)
        k = numsSize - 1;
    while (i < k)
    {
        NewArr[i] = nums[numsSize - k +i];
        i++;
    }
    while(j < numsSize - k)
    {
        NewArr[i] = nums[j];
        j++;
        i++;
    }
    memcpy(nums,NewArr,numsSize *4);
    return(nums);
}