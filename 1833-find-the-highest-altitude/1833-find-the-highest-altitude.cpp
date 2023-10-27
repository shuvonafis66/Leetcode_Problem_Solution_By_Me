class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        gain.emplace(gain.begin()+0,0);
        vector<int>ans;
        for(int i=0;i<gain.size();i++)
        {
            sum=sum+gain[i];
            ans.push_back(sum);
        }
        return *max_element(ans.begin(),ans.end());
    }
};