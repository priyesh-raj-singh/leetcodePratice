class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s;
        int n = candyType.size();
        for(int i = 0 ;i<candyType.size() ; i++){
            s.insert(candyType[i]);
        }
      if(n/2<s.size()){
          return n/2;
      }
        return s.size();
        
    }
};