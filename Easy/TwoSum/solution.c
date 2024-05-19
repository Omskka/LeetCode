int* twoSum(int* nums, int numsSize, int target, int* returnSize){ 
    int i = -1;
    int j = 0;   
    *returnSize = 2;
    int* element = (int*)malloc(2*sizeof(int));

    while(i < numsSize){
        i++;
        j = i + 1;
        while(j < numsSize){
            if(nums[i] + nums[j] == target){
                element[0] = i;
                element[1] = j;
                return(element);
            }
            j++;
        }
    }
    element[0] = -1;
    element[1] = -1;
    return(element);
}