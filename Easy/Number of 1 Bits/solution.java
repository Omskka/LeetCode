public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int bit = 0;
        int idx = 31;

        while(idx >= 0){
            bit += ((n >> idx) & 1);
            idx--;
        }
        return(bit);
    }
}