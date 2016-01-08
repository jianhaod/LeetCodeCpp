class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        int count = 0;
        int i = 0;
        while(index != nums.size()) {
            if(nums[index] == 0) {
                index++;
            } else {
                for(i = index; i > count; i--) {
                    int tmp;
                    tmp = nums[i];
                    nums[i] = nums[i-1];
                    nums[i-1] = tmp;
                }
                count++;
                index++;
            }

        }
        
    }
};