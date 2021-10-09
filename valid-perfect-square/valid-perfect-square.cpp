class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long long   n =0;
        while(n*n <= num) {
            if(n*n == num ) 
                return true;
            n++;
        }
        return false;
        
    }
};