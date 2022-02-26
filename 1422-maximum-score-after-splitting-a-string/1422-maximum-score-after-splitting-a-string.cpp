class Solution {
public:
    int maxScore(string s) {
        int rightone = 0 ; 
        for(char c : s)
            if(c=='1')
                rightone++;
        int score = 0 ; 
        int leftzero = 0 ;
        for(int i = 0 ; i<s.length() -1; i++){
            if(s[i]=='0') leftzero++;
        else
            rightone--;
            
        score = max(score , leftzero+rightone);
        }
        
        return score;
        
        
        
        
        
    }
};