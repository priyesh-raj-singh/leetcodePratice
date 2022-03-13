class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin() , salary.end());
        double n = salary.size()-2;
        double sum = 0.00000;
        for(int i = 1 ; i<salary.size()-1 ; i++){
            sum+=salary[i];
        }
        double ans = sum/n;
        return ans;
        
    }
};