// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int facDigits(int N){
        //code here
        if(N<0)
return 0;
if(N<=1)
return 1;
double r=0;
for(int i=2;i<=N;i++)
{
r=r+log10(i);
}
return floor(r)+1;

    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.facDigits(n)<<"\n";
       
        
    }
    return 0;
}  // } Driver Code Ends