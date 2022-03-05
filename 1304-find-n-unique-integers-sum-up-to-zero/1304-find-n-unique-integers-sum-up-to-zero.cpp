class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        if(n%2!=0)
            v.push_back(0);
        
        for(int i = n/2 ; i>0 ; i--)
            v.push_back(-i);
        
        for(int i = 1 ; i<=n/2 ; i++)
            v.push_back(i);
        
        return v;
        
        
    }
};