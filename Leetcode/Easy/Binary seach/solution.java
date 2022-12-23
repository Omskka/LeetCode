class Solution {
    public int search(int[] nums, int target) {
        int i = 0;
        int size;

        size = nums.length;
        for(;i < size; i++){
            if (nums[i] == target)
                return (i);
        }
        return(-1);
    }
}
