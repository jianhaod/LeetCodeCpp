class Solution {
public:
    int romanToInt(string s) {
        int table[256] = {0};
        table['I'] = 1;
        table['V'] = 5;
        table['X'] = 10;
        table['C'] = 100;
        table['M'] = 1000;
        table['L'] = 50;
        table['D'] = 500;
        int prev = 0,result = 0;
        for(int i=s.size()-1;i>=0;i--)
        {
            int val = table[s[i]];
            if(val < prev)  
                result -= val; 
            else
                result += val;
            prev = val;
        }
        return result;
    }
};