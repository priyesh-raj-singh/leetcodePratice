class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i = 0 ; i<nums1.size() ; i++)
            v.push_back(nums1[i]);
        
        for(int i = 0 ; i<nums2.size() ; i++)
            v.push_back(nums2[i]);
        
        sort(v.begin() , v.end());
        
        int n = v.size();
        if(n%2==0){
            int n1 = n/2;
            int n2 = (n-1)/2;
            int n3 = v[n1]+v[n2];
            double n9 = n3/2.00000;
            return n9;
        }
        else{
            int n5 = (n-1)/2;
            double n8 = v[n5];
            return n8;
        }
        return 0;
        
    }
};