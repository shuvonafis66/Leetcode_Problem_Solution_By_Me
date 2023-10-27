class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        reverse(nums.begin(),nums.end());
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            while (nums[i]) {
                int x = nums[i] % 10;
                nums[i] = nums[i] / 10;
                ans.push_back(x);
            }
        }

    reverse(ans.begin(),ans.end());
    return ans;
    }
};