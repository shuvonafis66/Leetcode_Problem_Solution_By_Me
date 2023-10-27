class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> num2;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = 0; j <= i; j++) {
                sum += nums[j];
            }
            num2.push_back(sum);
        }
        return num2;  
    }
};