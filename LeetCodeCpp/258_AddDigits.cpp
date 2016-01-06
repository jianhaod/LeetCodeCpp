
class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        int final = 0;

        do {
            do {
                sum = sum + (num%10);
            } while(num = (num/10));
            cout<<"num:"<<num<<endl;
            num = sum;
            final = sum;
            sum = 0;
        } while(final/10);

        return final;
    }
};
