class Solution {
public:
    int maximum69Number (int num) {
    int rem,temp=num,count=0,x;
    while(temp)
    {
    rem=temp%10;
    if(rem==6)
    {
    x=num+3*pow(10,count);
    }
    temp=temp/10;
    count++;
    }
    return x;  
    }
};