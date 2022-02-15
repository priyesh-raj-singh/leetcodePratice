class Solution {
public:
    int getLucky(string s, int k) {
        int res = 0;
        for (auto a : s) {
            int val = a - 'a' + 1;
            res += val / 10 + val % 10;
        }
        
        k--;
        while (k--) {
            int tmp = 0;
            while (res) {
                tmp += res % 10;
                res /= 10;
            }
            res = tmp;
        }
        
        return res;
    }
};