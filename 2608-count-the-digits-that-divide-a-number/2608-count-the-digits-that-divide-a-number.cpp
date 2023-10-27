class Solution {
public:
    int countDigits(int num) {
          int temp,count=0,x;
    temp=num;

    while(temp)
    {
        x=temp%10;
        temp=temp/10;

        if (num%x==0)
        {
            count++;
        }

    }
       return count;
        
    }
};