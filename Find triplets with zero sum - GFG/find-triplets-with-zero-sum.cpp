// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

 // } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int a[], int n)
    { 
        //Your code here
        sort(a , a+n);
        for(int i = 0 ; i<n ; i++){
            int l = 0 , h = n-1;
            while(l<h){
                if(l!=i && h!=i){
                    if(a[l]+a[h]==-a[i]){
                        return true;
                    }
                    if(a[l]+a[h]>(-a[i])){
                        h--;
                    }
                    else{
                        l++;
                    }
                   
                }
                 else{
                        if(l==i) l++;
                        if(h==i) h--;
                    }
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}  // } Driver Code Ends