class Solution {
public:
    string interpret(string s) {
        string ans = "";
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i]=='G')
                ans+='G';
            else if(s[i]=='(' and s[i+1]==')')
                ans+='o', i++;
            else
                ans+="al", i+=3;
        }
        return ans;
        
    }
};