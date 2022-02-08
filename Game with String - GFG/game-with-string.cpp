// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char , int> mp;
        int sum = 0;
        
        for(int i = 0 ; i<s.length() ; i++){
            mp[s[i]]++;
        }
        char ch;
        while(k--){
            int maxi = INT_MIN;
            for(auto it :mp){
                if(it.second>maxi){
                    maxi = it.second;
                    ch = it.first;
                    
                }
                
            }
            mp[ch]--;
            
        
        }
        int ans = 0;
        for(auto it:mp){
            ans+=pow(it.second,2);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}  // } Driver Code Ends