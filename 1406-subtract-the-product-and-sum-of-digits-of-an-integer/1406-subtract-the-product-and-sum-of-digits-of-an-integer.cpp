class Solution {
public:
    int subtractProductAndSum(int n) {
       int num,sump=1,sums=0;
            while(n)
{
    int x=n%10;
    n=n/10;
    sump=sump*x;
    sums=sums+x;
}
return sump-sums;
        }
};