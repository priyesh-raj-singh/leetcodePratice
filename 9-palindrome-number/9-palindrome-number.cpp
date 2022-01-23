class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.size();
        bool ans = 1;
        for(int i = 0 ; i<s.size()/2 ; i++){
            if(s[i]!=s[n-1-i]) 
                ans = 0;
            
        }
         return ans;
        
    }
};