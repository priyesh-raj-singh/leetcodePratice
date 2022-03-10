// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int k)
    {
        //Your code here
        int ans = 0 , sum = 0;
        unordered_map<int , int> mp;
        for(int i = 0 ; i<n ; i++){
            sum+=arr[i];
            
            if(sum==k) ans++;
            if(mp.find(sum-k)!=mp.end()) ans+=mp[sum-k];
            
            mp[sum]++;
        }
        return ans;
    }
    
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution obj;
	    cout<<obj.subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends