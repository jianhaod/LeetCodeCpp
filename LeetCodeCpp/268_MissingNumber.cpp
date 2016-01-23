class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int lenth = nums.size();
        int expect = (lenth*(lenth + 1))/2;
        int sum = 0;
        int index = 0;
        for(index; index<nums.size(); index++) {
            sum += nums[index];
        }
        return (expect - sum);
    }
};