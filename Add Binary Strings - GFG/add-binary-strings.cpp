// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{
	    // your code here
	    int i = A.size()-1;
	    int j = B.size()-1;
	    int carry = 0 ; 
	    string ans = "";
	    while(i>=0 || j>=0 || carry){
	        if(i>=0){
	            carry+=A[i]-'0';
	            i--;
	        }
	        if(j>=0){
	            carry+=B[j]-'0';
	            j--;
	        }
	        ans+= (carry%2 + '0');
	        carry = carry/2;
	    }
	    i=ans.size()-1;
	    
	    while(ans[i]=='0'){
	        i--;
           ans=ans.substr(0,i+1);
           
	        
	    }
	    reverse(ans.begin() , ans.end());
           
	    
	    return ans;
	}
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends