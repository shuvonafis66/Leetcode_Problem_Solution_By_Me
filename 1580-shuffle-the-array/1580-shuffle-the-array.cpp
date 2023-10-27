class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> vector2;
   for (int i = 0; i < n; i++)
   {
    vector2.push_back(nums[i]);
    vector2.push_back(nums[i+n]);
   }
  return vector2;
   }
};