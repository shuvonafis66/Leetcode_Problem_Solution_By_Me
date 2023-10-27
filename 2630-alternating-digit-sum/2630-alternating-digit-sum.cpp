class Solution {
public:
    int alternateDigitSum(int n) {
        int digit=0,pos=0,neg=0,rem,temp;
        temp=n;
    while(temp)
    {
        temp=temp/10;
        digit++;
    }
    while(n)
    {
        rem=n%10;
        n=n/10;
        if(digit%2!=0)
        {
            pos=pos+rem;
            digit--;
        }
        else
        {
            neg=neg+rem;
            digit--;
        }
    }
return pos-neg;
        }
};