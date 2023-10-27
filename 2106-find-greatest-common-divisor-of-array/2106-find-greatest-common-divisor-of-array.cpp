class Solution {
public:
    int findGCD(vector<int>& nums) {
        auto maxi=max_element(nums.begin(),nums.end());
        auto mini=min_element(nums.begin(),nums.end());
        int i=*maxi;
        while(i!=1)
        {
            if(*maxi%i==0 && *mini%i==0)
            break;
            i--;
        }
        return i;
}
};