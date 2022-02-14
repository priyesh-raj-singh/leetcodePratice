// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
                   
       int count =0, curr_S=0, maxJ=0;
       for(int i=0;i<n-1;i++)
       {
           maxJ=max(maxJ, i+arr[i]);
           
           if(i == curr_S)
           {
               count++;
               curr_S= maxJ;
           }
           if(arr[i] == 0 && i == curr_S)
           return -1;
           
       }
       return count;
   }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends