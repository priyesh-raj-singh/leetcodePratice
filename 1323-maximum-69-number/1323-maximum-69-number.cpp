class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        int count = 1;
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i]=='6'&&count>0){
                s[i]='9';
                count--;
            }
            
            else
                continue;
        }
        int ans = stoi(s);
        return ans;
        
    }
};