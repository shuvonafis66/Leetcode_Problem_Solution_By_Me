class Solution {
public:
    bool isPowerOfTwo(int n) {


        if (n <= 0) {
            return false;
        }

       int rem;
while(rem!=1)
    {
        rem=n%2;
        n=n/2;
    }

    if(n!=0)
        return false;
    else
        return true;
        
    }
};