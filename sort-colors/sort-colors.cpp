class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=1;i<=nums.size() -1;i++)
    {
       for(int j=0;j<=nums.size() -2;j++)
       {
           if(nums[j]>nums[j+1])
           {
              int temp=nums[j+1];
               nums[j+1]=nums[j];
               nums[j]=temp;
               
           }
           
       }
        
    }
        
    }
};