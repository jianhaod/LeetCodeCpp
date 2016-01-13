class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) {
            return n;
        }
        int ret1 = 1; 
        int ret2 = 2;
        int sum = 0;
        int index = 3;
        while(index <= n) {
            sum = ret1 + ret2;
            ret1 = ret2;
            ret2 = sum;
            index ++;
        }
        return sum;
    }
};