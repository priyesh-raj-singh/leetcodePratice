class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0 ;
        int j = s.length()-1;
        while(i<j){
            while(i<j && !isalnum(s[i])) i++;
            while(i<j && !isalnum(s[j])) j--;
            
            if(toupper(s[i])!=toupper(s[j])) return 0;
            
            i++;
            j--;
        }
        return 1;
        
    }
};