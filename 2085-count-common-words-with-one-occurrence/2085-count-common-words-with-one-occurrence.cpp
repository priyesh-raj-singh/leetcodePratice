class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int ans = 0;
        unordered_map<string , int> m1 , m2;
        
        
        for(int i = 0 ; i<words1.size() ; i++)
            m1[words1[i]]++;
        for(int i = 0 ; i<words2.size() ; i++)
            m2[words2[i]]++;
        
          for(string word:words2)
        {
            if(m1[word]==1 && m2[word]==1)
                ans++;
        }
        return ans;
            
    }
};