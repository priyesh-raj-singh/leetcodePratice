class Solution {
public:
    int sumsq(int n){
        int sum = 0;
        while(n>0){
            sum+=(n%10)*(n%10);
            n = n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        while(n>6){
            n = sumsq(n);
        }
        if(n!=1) 
            return false;
        
        return true;
        
    }
};