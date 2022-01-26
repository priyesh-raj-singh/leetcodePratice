// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*
str: string in which pattern we have to find pattern.
text: pattern needs to searched.
*/

bool searchPattern(string str, string pat)
{
    // your code here
    int n = str.length();
    int m = pat.length();
    
    for(int i = 0 ; i<n-m+1;i++){
        int j;
        for( j = 0; j<m ;j++){
            if(str[i+j]!=pat[j]){
                break;
            }
        }
        if(m==j){
            return true;
        }
    }
    return false;
    
}



// { Driver Code Starts.
int main()
{
    int t; cin>>t;
    
    while(t--)
    {
        string str, pat;
        cin>>str;
        cin>>pat;
        
        if(searchPattern(str, pat) == true)
            cout << "Present" <<endl;
        else cout << "Not present" <<endl;
    }
}

  // } Driver Code Ends