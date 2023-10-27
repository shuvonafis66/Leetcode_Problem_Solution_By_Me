class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
    vector<int>num;
for(int i=left;i<=right;i++)
    {
        int k=i;
        while(k)
        {
            int p=k%10;
            if(p==0||i%p!=0)
                break;
                k=k/10;
        }
        if(k==0)
        num.push_back(i);
    }

    return num;
}
};