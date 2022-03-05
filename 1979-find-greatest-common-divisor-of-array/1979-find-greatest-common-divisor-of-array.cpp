class Solution {
public:
    int gcd(int a , int b){
        if(a%b==0) return b;
        
        return gcd(b , a%b);
    }
    int findGCD(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin() , nums.end());
        
        return gcd(maxi , mini);
        
    }
};