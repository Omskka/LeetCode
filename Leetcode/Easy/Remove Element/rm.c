int removeElement(int* nums, int numsSize, int val){
    int i = 0, j = 0, c;
 
    while (i < numsSize){
        if (nums[i] != val){
            nums[j] = nums[i];
            j++;
        }
        i++;
    }
    c = j;
    while (j < numsSize){
        nums[j] = ' ';
        j++;
    }
  return(c);
}