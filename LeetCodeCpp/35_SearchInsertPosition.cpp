class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int index = 0;
        for(index; index < size; index++) {
            if(nums[index] >= target) {
                return index;
            }
        }
    }
};