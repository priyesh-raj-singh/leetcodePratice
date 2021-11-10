class Solution {
public:
    int longestValidParentheses(string s) {
        stack<char> c; 
        stack<int> index; 
        index.push(-1);
        int maxi = 0 ;
        
        for(int i = 0 ; i<s.size(); i++){
            if(s[i]=='('){
                c.push('(');
                index.push(i);
            }
            
                
        else{
            if(!c.empty() && c.top() =='('){
                c.pop();
                index.pop();
                maxi = max(maxi , i-index.top());
            }
            else{
                index.push(i);
            }
        }
        }
        return maxi;
    }
};