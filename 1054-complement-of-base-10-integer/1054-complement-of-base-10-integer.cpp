class Solution {
public:
    int bitwiseComplement(int n) {
int rem,i=0,temp=0;
if(n==0)
return 1;
        while(n!=0)
    {
        rem=n%2;
        n=n/2;
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