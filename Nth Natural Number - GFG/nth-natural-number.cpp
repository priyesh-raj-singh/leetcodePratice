// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++


class Solution{
	public:
    	long findNth(long N)
{
long ans=0;
long mul=1;
while(N!=0)
{
long dig=N%9;
N=N/9;
ans+=(mul*dig);
mul=mul*10;
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
		long long n , ans;
		cin>>n;
		Solution obj;
		ans = obj.findNth(n);
		cout<<ans<<endl;
	}
}

  // } Driver Code Ends