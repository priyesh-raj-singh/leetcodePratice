class Solution {
public:
    int count(int n){
        int c = 0 ; 
        while(n){
            if(n%2!=0)
                c++;
            n = n/2;
        }
        return c;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> v;
        map<int , vector<int>> mp;
        sort(arr.begin() , arr.end());
        for(int i = 0 ; i<arr.size() ; i++){
            mp[count(arr[i])].push_back(arr[i]);
            
        }
        for(auto it = mp.begin() ; it!=mp.end() ; it++){
            for(int a : it->second)
                v.push_back(a);
        }
        return v;
        
    }
};