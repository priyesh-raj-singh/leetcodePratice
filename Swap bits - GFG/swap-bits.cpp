// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:    
    int swapBits(int x, int p1, int p2, int n)
{
int set1;
int set2;
int xoroperation;
int result;
set1 = (x >> p1) & ((1U << n) - 1);
set2 = (x >> p2) & ((1U << n) - 1);
xoroperation = set1 ^ set2;
xoroperation = (xoroperation << p1) | (xoroperation << p2);
result = x ^ xoroperation;
return result;
}
};

// { Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,p1,p2,n;
		cin>>x>>p1>>p2>>n;
		Solution obj;
		int res=obj.swapBits(x,p1,p2,n);
		printf("%d\n", res);
	}
    return 0;
}  // } Driver Code Ends