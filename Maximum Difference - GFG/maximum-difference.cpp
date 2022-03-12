// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int a[], int n)
    {
        int m, i, j;
        vector<int> ls, rs;
        
        for(i=0;i<n;i++)
        {
            for(j=i;j>=0;j--)
            {
                if(a[j]<a[i])
                {
                    ls.push_back(a[j]);
                    break;
                }
            }
            if(j==-1)
            ls.push_back(0);
        }
        
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                if(a[j]<a[i])
                {
                    rs.push_back(a[j]);
                    break;
                }
            }
            if(j==n)
            rs.push_back(0);
        }
        m=0;
        for(int i=0;i<ls.size();i++)
        {
            ls[i]=abs(ls[i]-rs[i]);
            if(ls[i]>m)
            m=ls[i];
        }
        
        return m;
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
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}


  // } Driver Code Ends