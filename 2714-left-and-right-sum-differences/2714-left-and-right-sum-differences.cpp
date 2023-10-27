class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        vector<int> leftsums;
        vector<int> rightsums;
        int leftsum = 0, rightsum = 0;
        nums.insert(nums.begin(), 0);
        nums.push_back(0);
        for (int i = 0; i < nums.size() - 2; i++) {
            leftsum = leftsum + nums[i];
            rightsum = rightsum + nums[nums.size() - i - 1];
            leftsums.push_back(leftsum);
            rightsums.push_back(rightsum);
            
        }
        reverse(rightsums.begin(), rightsums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            ans.push_back(abs(leftsums[i] - rightsums[i]));
        }
        return ans;
    }
};