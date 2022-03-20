class Solution {
public:
    bool halvesAreAlike(string s) {
        int count = 0 ;
        int count2 = 0;
        int n = s.size();
        for(int i = 0 ; i<n/2 ; i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                count++;
        }
        
          for(int i = n/2 ; i<n ; i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                count2++;
        }
        if(count==count2)
            return true;
        return false;

        
    }
};