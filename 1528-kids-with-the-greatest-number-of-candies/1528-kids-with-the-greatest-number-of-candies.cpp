class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        auto maxele=max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++)
        {
            int x=candies[i]+extraCandies;
            if(x>=*maxele)
            ans.push_back(true);
            else 
            ans.push_back(false);
        }
    return ans;
    }
};