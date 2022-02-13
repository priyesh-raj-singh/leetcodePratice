// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    vector<vector<int>> ans;
    void helper(vector<int> arr , int i , int n , vector<int> v){
        if(i==n){
            ans.push_back(v);
            return;
        }
        v.push_back(arr[i]);
        helper(arr , i+1 , n , v);
        v.pop_back();
        helper(arr , i+1 , n , v);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<int> v;
        helper(A , 0 , A.size() , v);
        sort(ans.begin() , ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends