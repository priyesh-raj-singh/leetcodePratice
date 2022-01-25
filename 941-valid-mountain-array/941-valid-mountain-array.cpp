class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        int n = arr.size();
        int i = 0 ; 
        int j = n-1;
        while(i<n && arr[i+1]>arr[i])
            i++;
        
        while(j>0 && arr[j-1]>arr[j])
            j--;
        
        if(i>0 && i==j && j<n-1)
            return true;
        
        return false;
        
        
            
        
    }
};