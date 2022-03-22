class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> s;
        for(int i = 0 ; i<arr.size() ; i++){
            if(s.count(arr[i])) 
                return true;
            if(arr[i]%2==0)
                s.insert(arr[i]/2);
            s.insert(2*arr[i]);
            
        }
        return false;
        
    }
};