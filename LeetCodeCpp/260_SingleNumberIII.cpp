class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int size = nums.size();
        int index = 0;
        int result1 = 0;
        
        for(index = 0; index < size; index++) {
            result1 = result1^nums[index];
        }
        
        int a = 0;
        int b = 0;
        int pos = markbitpos(result1);
        vector<int> vec(2);
        for(index = 0; index < size; index++) {
            if(checkbit(nums[index], pos)) {
                a = a^nums[index];
            } else {
                b = b^nums[index];
            }
        }
        vec[0] = a;
        vec[1] = b;
        return vec;
    }

    bool checkbit(int val, int pos) {
        if(0x01&(val >> pos)) {
            return true;
        } else {
            return false;
        }
    }

    int markbitpos(int val) {
        int index = 0;
        while(!(0x01&(val >> index))) {
            index++;
        }
        return index;
    }
};