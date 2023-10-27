class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> ans;
        int count = 0;
        for (int i = 0; i < rectangles.size(); i++) {
            int minimum = min(rectangles[i][0], rectangles[i][1]);
            ans.push_back(minimum);
        }
        int n = *max_element(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] == n)
                count++;
        }
        return count;
    }
};
