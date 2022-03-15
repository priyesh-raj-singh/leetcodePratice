class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& arr) {
        int index=-1;
        int res=INT_MAX;
     for(int i=0;i<arr.size();i++){
           int a=abs(x-arr[i][0])+abs(y-arr[i][1]);
           if(res>a&&((arr[i][0]==x)||(arr[i][1]==y))){
               res=a;
               index=i;
           }
     }
        if(index!=-1)
        return index;
        return -1;
    }
};