class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        if(s == goal){
            return ((set<char>(s.begin(),s.end())).size() < s.size());
        }
        
        int n = s.size();
        int i=0;
        int j=n-1;
        while(i<n&& s[i]==goal[i]){
            i++;
        }
        while(j>0 && s[j] == goal[j]){
            j--;
        }
        
        if(i<j){
            swap(s[i],s[j]);
        }
        
        return s == goal;
    }
};