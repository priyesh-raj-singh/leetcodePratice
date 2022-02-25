class Solution {
public:
    int compareVersion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        int v1 = 0 , v2 = 0;
        int i = 0 ; 
        int j = 0;
        while(i<n || j<m){
            while(i<n && s1[i]!='.'){
                v1 = v1*10 + (s1[i]-'0');
                i++;
            }
            while(j<m && s2[j]!='.'){
                v2 = v2*10 +(s2[j]-'0');
                j++;
            }
            if(v1<v2)
                return -1;
            else if(v1>v2)
                return 1;
            
            i++;
            j++;
            v1 = 0 ;
            v2 = 0;
            
            
        }
        return 0;
        
    }
};