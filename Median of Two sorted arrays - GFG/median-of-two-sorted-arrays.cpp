// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find the median of the two arrays when they get merged.
    int findMedian(int arr[], int N, int brr[], int M)
    {
        // code here
        vector<int> v;
        for(int i = 0 ; i<N ; i++){
            v.push_back(arr[i]);
        }
        for(int i = 0 ; i<M ; i++){
            v.push_back(brr[i]);
        }
        sort(v.begin() , v.end());
        int n = v.size();
        if(n%2==0){
            int n1=n/2;
            int n2 = (n-1)/2;
            int n3 = (v[n1]+v[n2])/2;
            return n3;
        }
        if(n%2!=0){
            int n6 = (n-1)/2;
            return v[n6];
        }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    Solution obj;
	    if(n < m)
	        cout << obj.findMedian(arr, n, brr, m) << endl;
	   else
	        cout << obj.findMedian(brr, m, arr, n) << endl;
	    
	}

}  // } Driver Code Ends