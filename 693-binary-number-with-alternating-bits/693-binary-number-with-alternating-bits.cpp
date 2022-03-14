class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool ans;
        while(n!=0){
            int a = (n&1);
            n = n>>1;
            int b = (n&1);
            if(a==b)
                return false;
            
        }
        return true;
            
        
    }
};