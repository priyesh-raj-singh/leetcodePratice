class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int , int> mp;
        for(auto &it:arr)
            mp[it]=0;
        
        int rank = 0;
        for(auto &it:mp)
            mp[it.first] =  ++rank;
        
        for(int i = 0 ; i<arr.size() ; i++)
            arr[i]=mp[arr[i]];
        
        return arr;
        
        
    }
};