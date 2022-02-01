// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
  public:
    string stringFilter(string str) 
    { 
        //code here.
        string ans = "";
        int i =0;
        while(i<str.length()){
            if(str[i]=='a' && str[i+1]=='c'){
                i = i+2;
            }
            else if(str[i]=='b'){
                i++;
                
            }
            else{
                ans+=str[i];
                i++;
                
            }
        }
        return ans;
    } 
};

// { Driver Code Starts.

int main() 
{
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		
   		Solution ob;
   		cout <<ob.stringFilter(s) << "\n";

   		
   	}

    return 0;
}  // } Driver Code Ends