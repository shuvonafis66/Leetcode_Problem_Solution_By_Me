class Solution {
public:
    int trailingZeroes(int n) {
        int k=5,count=0;
while(n!=0)
{
    n=n/5;
    count=count+n;
}
   return count;
}
};