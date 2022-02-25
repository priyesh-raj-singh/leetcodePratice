// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int VersionCompare(string v1, string v2) ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string v1, v2;
        cin>>v1;
        cin>>v2;
        cout<<VersionCompare(v1,v2)<<endl;
    }
    return 0;
}


 // } Driver Code Ends
//User function Template for C++

int VersionCompare(string s1, string s2) 
{
    int n = s1.size();
        int m = s2.size();
        int v1 = 0 , v2 = 0;
        int i = 0 ; 
        int j = 0;
        while(i<n || j<m){
            while(i<n && s1[i]!='.'){
                v1 = v1*10 + (s1[i]-'0');
                i++;
            }
            while(j<m && s2[j]!='.'){
                v2 = v2*10 +(s2[j]-'0');
                j++;
            }
            if(v1<v2)
                return -1;
            else if(v1>v2)
                return 1;
            
            i++;
            j++;
            v1 = 0 ;
            v2 = 0;
            
            
        }
        return 0;
        
    
}

// { Driver Code Starts.


  // } Driver Code Ends