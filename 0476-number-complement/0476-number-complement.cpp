class Solution {
public:
    int findComplement(int num) {
        int rem,i=0,temp=0;
if(num==0)
return 1;
        while(num!=0)
    {
        rem=num%2;
        num=num/2;
        if(rem==0)
            rem=1;
        else if (rem==1)
            rem=0;
        temp=temp+(rem*pow(2,i));
        i++;
        }
return temp;
        
    
    }
};