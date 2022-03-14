// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string binaryAdd(int n, string s){
        // code here
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='0'){
                s[i]='1';
                return s;
            }else if(s[i]=='1'){
                s[i]='0';
            }
        }
        return '1'+s;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        
        Solution ob;
        cout<<ob.binaryAdd(n, s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends