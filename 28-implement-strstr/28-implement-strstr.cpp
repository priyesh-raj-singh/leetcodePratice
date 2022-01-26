class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        
        
        
        for(int i = 0 ; i<n-m+1 ; i++){
            int j ;
            for(j = 0 ; j<m ; j++){
                if(haystack[i+j]!=needle[j])
                    break;
            }
            if(m==j)
                return i;
        }
        return -1;
    }
};