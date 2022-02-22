class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while(columnNumber!=0){
            columnNumber--;
            int r = columnNumber%26;
            ans =string(1 , r +'A') + ans;
            columnNumber = columnNumber/26;
        }
        return ans;
        
    }
};