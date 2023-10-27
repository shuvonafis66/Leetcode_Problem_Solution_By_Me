class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int single = 0;
        if (nums.size() % 2 != 0) {
            nums.push_back(0); // Add a different number to the end to ensure an even number of elements
        }
        for (int i = 0; i < nums.size(); i += 2) {
            if (nums[i] != nums[i + 1]) {
                single = nums[i];
                break; // Break the loop once the single number is found
            }
        }
        return single;
    }
};
