class Solution {
public:
    string makeFancyString(string s) {
        string ans;
        int count = 1;
        for(int i = 0 ; i<s.size(); i++){
            ans+=s[i];
            if(s[i]==s[i+1]){
                count++;
            
            if(count>2){
                ans.pop_back();
            }
            }
            else{
                count = 1;
            }
        }
        return ans;
        
    }
};