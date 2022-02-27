// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string s, string t)
{
// Your code goes here
 unordered_map<char , int> mp;
        int count = 0;
        for(int i = 0 ; i<s.size() ; i++)
            mp[s[i]]++;
        
        int n = t.size();
        for(int i = 0 ; i<n ; i++){
            mp[t[i]]--;
        }
        for(auto it:mp)
            count+=abs(it.second);
        
        return count;
        
    }