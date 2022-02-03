// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string> ans;
	    find(ans , "1" , N , N , N);
	    return ans;
	}
	
	void find(vector<string> &ans , string curr,int zero , int one,int N){
	    if(curr.length()==N){
	        ans.push_back(curr);
	        return;
	    }
	    if(one>0){
	        find(ans,curr+"1" , zero , one-1 , N);
	    }
	    if(zero>=one){
	        find(ans , curr+"0" , zero-1,one,N);
	    }
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends