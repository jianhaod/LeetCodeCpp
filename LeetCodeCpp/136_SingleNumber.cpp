class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int index = 0;
        int ret = 0;
        for(index; index<nums.size(); index++) {
            ret = ret^nums[index];
        }
        return ret;
    }
};