class Solution {
public:
    int countEven(int num) {

        int count=0;

        for(int i=1;i<=num;i++)
        {
            int x=i,sum=0;
            while(x)
            {
                int rem=x%10;
                x=x/10;
                sum=sum+rem;
            }
            sum%2==0?count++:count;
            }
        return count;
        
    }
};