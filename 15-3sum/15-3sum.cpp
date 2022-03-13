class Solution {
public:
vector<vector<int>> threeSum(vector<int>& num) {
vector<vector<int>> res;
sort(num.begin(), num.end());
    int n = num.size();


    
    for (int i = 0; i < n-2; i++) {

        if (i == 0 || (i > 0 && num[i] != num[i-1])) {

            int lo = i+1, hi = n-1, sum = 0 - num[i];

            while (lo < hi) {
                if (num[lo] + num[hi] == sum) {

                    vector<int> temp;
                    temp.push_back(num[i]);
                    temp.push_back(num[lo]);
                    temp.push_back(num[hi]);
                    res.push_back(temp);

                    while (lo < hi && num[lo] == num[lo+1]) lo++;
                    while (lo < hi && num[hi] == num[hi-1]) hi--;

                    lo++; hi--;
                }
                else if (num[lo] + num[hi] < sum) lo++;
                else hi--;
           }
        }
    }
    return res;
}



};