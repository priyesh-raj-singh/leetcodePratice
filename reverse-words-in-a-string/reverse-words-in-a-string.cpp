class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        
        for(int i =0 ; i<s.length() ; i++){
            string words = "";
            
            if(s[i]==' ')
                continue;
            while(s[i]!=' ' and i<s.length()){
                words+=s[i];
                i++;
                
            }
            st.push(words);
        }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            if(st.size()!=1){
            ans+=" ";
            }
            st.pop();
        }
        return ans;
        
        
    }
};