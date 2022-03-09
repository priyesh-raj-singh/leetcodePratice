class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        s = s+s;
       
        string s1 , s2 ; 
        int ans = INT_MAX;
        int ans1 = 0 , ans2 = 0;
       
        for(int i = 0 ; i<s.size() ; i++){
            if(i%2==0)
                s1+='0';
            
            else
                s1+='1';
            
            if(i%2==0)
                s2+='1';
            
            else
                s2+='0';
                
            
        }
        
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i]!=s1[i])
                ans1++;
            if(s[i]!=s2[i])
                ans2++;
            
            if(i >= n) { 
                if(s1[i - n] != s[i - n]) ans1--;
                if(s2[i - n] != s[i - n]) ans2--;
            }
            if(i>=n-1)
            ans = min(ans,min(ans1 , ans2));
        }
        
        
        return ans;
        
    }
};