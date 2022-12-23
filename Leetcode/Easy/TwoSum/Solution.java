package Easy.TwoSum;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int j = 0;
        int i = -1;
        int[] element = new int[2]; 
        int size = nums.length;

    while(i < size){
        i++;
        j = i + 1;
        while(j < size){
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
    return (element);
    }
}