class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> m;
        if(s.size()!=t.size())
            return 0;
        
        for(int i = 0 ; i<s.size(); i++){
            m[s[i]]++;
            m[t[i]]--;
        }
        
        for(auto it :m ){
            if(it.second)
                return 0;
            
            
        }
        return true;
    }
};