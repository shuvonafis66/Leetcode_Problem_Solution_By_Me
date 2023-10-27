#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> replaceElements(std::vector<int>& arr) {
        std::vector<int> ans;
        for (int i = 0; i < arr.size() - 1; i++) {
            ans.push_back(*std::max_element(arr.begin() + i + 1, arr.end()));
        }
        ans.push_back(-1);
        return ans;
    }
};
