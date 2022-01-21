class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int countZero = 0;
        vector<int> ans ;
        
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]==0){
                countZero++;
                continue;
            }
            product*=nums[i];
        }
        
        if(countZero>1){
            for(int i = 0 ; i<nums.size() ; i++){
                ans.push_back(0);
            }
            return ans;
        }
        if(countZero==0){
            for(int i = 0 ; i<nums.size() ; i++){
                ans.push_back(product/nums[i]);
            }
            return ans;
        }
        for(int i = 0;i < nums.size(); i++){
           
          if(nums[i] == 0){
              ans.push_back(product);
          }
          else{
              ans.push_back(0);
          }
      }
       
       return ans;
        
    }
};