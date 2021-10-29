class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int>vec;
        vec=nums;
        
    sort( vec.begin(), vec.end() );
vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
        if(vec.size()<3)
        return vec[vec.size()-1];
        else{
           return vec[vec.size()-3] ;
        }
        
    }
};