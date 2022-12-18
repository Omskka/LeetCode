int search(int* nums, int numsSize, int target){
    int i = 0;

    while(i < numsSize){
        if (target == nums[i])
            return(i);
        i++;
    }
    return(-1);
}