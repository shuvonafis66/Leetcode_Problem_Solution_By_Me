class Solution {
public:
    int commonFactors(int a, int b) {
        int maxi=max(a,b),i=1,count=0;
        while(i<=maxi)
        {
            if(a%i==0 && b%i==0)
            count++;
            i++;
        }
        return count;
        }
};