// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*The function returns an integer
which denotes the max value 
of abs(i â€“ j) * min(arr[i], arr[j]) 
in the array.
*/

/*You are required to complete this method*/
class Solution
{
    public:
    int max_val(int arr[], int n)
    {
        //Your code here
        int maxi=0;
        int curr = 0;
        int i = 0; 
        int j = n-1;
        while(i<j){
            if(arr[i]<arr[j]){
                curr = abs(i-j)*arr[i];
                i++;
            }
            else{
                curr = abs(i-j)*arr[j];
                j--;
            }
            maxi = max(maxi , curr);
            
        }
        return maxi;
    }
};

// { Driver Code Starts. 

int main() {
	// your code goes here
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
		cout<<ob.max_val(a,n)<<endl;
		
	}
	return 0;
}  // } Driver Code Ends