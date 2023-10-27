class Solution {
public:
    int findNonMinOrMax(std::vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() >= 3) {
            return nums[1];
        } else {
            return -1;
        }
    }
};