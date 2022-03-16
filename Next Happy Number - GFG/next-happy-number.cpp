// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int fun(int n)
{
    int i=15;
    while(n!=1&&i)
    {
        int sum=0;
        while(n)
        {
            int r=n%10;
            sum+=(r*r);
            n=n/10;
        }
        n=sum;
        i--;
    }
    return n==1;
    
}
    int nextHappy(int n)
    {
        n++;
        while(1)
        {
            int x=fun(n);
            if(x==1)
            {
                break;
            }
            n++;
        }
        return n;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends