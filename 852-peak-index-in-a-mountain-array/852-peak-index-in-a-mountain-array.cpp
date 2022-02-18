class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxi = 0 ; 
        int index = 0;
        for(int i = 0 ; i<arr.size() ; i++){
            if(arr[i]>maxi)
                maxi = arr[i];
            
            }
        
        for(int i = 0 ; i<arr.size() ; i++){
            if(maxi ==arr[i])
                return i;
        }
        return 0;
            
        
        
            
         
        
    }
};