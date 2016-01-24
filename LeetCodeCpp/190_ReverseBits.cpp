class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int bit = 0;
        uint32_t result = 0;
        for(bit; bit < 32; bit++) {
            if(n&(1<<bit)) {
                result = (result | (1 << (31 - bit)));
            }
        }
        return result;
    }
};