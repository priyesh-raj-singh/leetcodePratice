class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string s = s1 + " " +s2 , str = "";
        map<string , int> mp; 
        vector<string> ans; 
        for(char x:s){
            if(x==' '){
                mp[str]++;
                str="";
            }
            else str+=x;
        }
        mp[str]++;
        for(auto it:mp){
            if(it.second ==1)
                ans.push_back(it.first);
        }
        return ans;
            
        
    }
};