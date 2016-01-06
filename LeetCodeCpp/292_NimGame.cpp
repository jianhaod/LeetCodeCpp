
#define MAXNUMBER 4

class Solution {
    public:
        bool canWinNim(int n) {
            if((n%MAXNUMBER) == 0) {
	        return false;
            } else {
                return true;
            }
	}
};
