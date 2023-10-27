class Solution {
public:
    int totalMoney(int n) {
    int sum=0,count=0;
    for(int i=0;i<n;i++)
    {
        int p=i;
        if(p%7==0)
        {
            int x=p/7;
            count=0+x;
        }
        count++;
        sum=sum+count;
}
return sum;
}
};