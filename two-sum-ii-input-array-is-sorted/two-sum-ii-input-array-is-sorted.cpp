class Solution {
public:
   vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0, high = numbers.size()-1;
        vector<int> sum;
        while(low < high)
        {
            int v =numbers[low] + numbers[high]  ;
            
            if(v == target)
            {
                sum.push_back(low+1);
                sum.push_back(high+1);   
                return sum;
            }
            else if(v > target)
                high--;
            else
                low++; 
        }
        return sum;
    }
};