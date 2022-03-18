class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector<int> preSum(n+1);
        int sum = 0 ; 
         preSum[0] = 0;
        
        
        for(int i=0 ; i<n ; i++){
            preSum[i+1] = arr[i]+preSum[i];
        }
        for(int i = 0 ;i<n ; i++){
            for(int j = i ;j <n ; j+=2){
                if(i==j)
                    sum+=arr[i];
                
                else
                    sum+=preSum[j+1]-preSum[i];
            }
        }
        return sum;
        
    }
};