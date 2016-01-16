class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(auto it = std::find(nums.begin(), nums.end(), val); 
             it != nums.end(); 
             it = std::find(it, nums.end(), val)) 
        {
            it = nums.erase(it); 
        }
            return nums.size();         
        }
};