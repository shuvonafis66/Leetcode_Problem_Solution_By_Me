class Solution {
public:
    bool isPalindrome(int x) {


        if (x<0)

        return false;
        int ans=0,rem,temp;
        temp=x; 
        while(temp!=0)
        {
            rem=temp%10;
            temp=temp/10;
            if(ans>INT_MAX/10)
            return false;
            ans=ans*10+rem;
            
        }

        if (ans==x)
        return true;
        else
        return false;
        
    }
};