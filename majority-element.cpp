class Solution {
    public int majorityElement(int[] nums) {
        int freq = -1;
        int majority = -1;
        
        for(int i = 0;i < nums.length;i++) {
            if(freq <= 0) {
                freq = 1;
                majority = nums[i];
            }
            else {
                if(nums[i] == majority) 
                    freq++;
                else
                    freq--;
            }
        }
        return majority;
    }
}
