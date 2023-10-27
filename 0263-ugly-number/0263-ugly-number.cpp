class Solution {
public:
    bool isUgly(int n) {

    if (n<= 0) 
    return false;
        else {
        while (n % 2 == 0) {
            n /= 2; // Divide by 2 as long as it's divisible
        }
        while (n % 3 == 0) {
            n /= 3; // Divide by 3 as long as it's divisible
        }
        while (n % 5 == 0) {
            n/= 5; // Divide by 5 as long as it's divisible
        }
        if (n == 1) 
            return true;
        else 
            return false;
         }

        

        
    }
};