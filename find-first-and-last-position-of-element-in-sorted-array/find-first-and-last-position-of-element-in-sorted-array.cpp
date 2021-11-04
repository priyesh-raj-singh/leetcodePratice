class Solution {
public:
    vector<int> searchRange(vector<int>& v, int x) {
           

long first=-1;
long last=-1;
for(int i=0;i<v.size();i++)
{
    if(v[i]==x)
    {
        first=i;
    break;
    }
    }
    for(int i=v.size()-1;i>=0;i--)
    {
if(v[i]==x){
last=i;
break;
}
}
vector<int> ans;
ans.push_back(first);
ans.push_back(last);
return ans;
}
        
    
};