class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count = 0 ;
        int ans;
        int k = 1;
        
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]<0)
                count++;
            if(nums[i]==0)
                k = 0;
        }
        if(count%2==0&&k!=0){
            return 1;
        }
        else if(count%2!=0 && k!=0)
            return -1;
        else
            return 0;
        
    }
};