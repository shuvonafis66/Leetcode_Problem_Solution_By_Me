class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int vectorsize=nums.size();
        for(int i=0;i<vectorsize;i++)
        {
            nums.push_back(nums[i]);
        }
    return nums;
    }
    };