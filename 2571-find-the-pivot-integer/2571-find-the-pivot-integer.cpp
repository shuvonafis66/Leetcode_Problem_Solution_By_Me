class Solution {
public:
    int pivotInteger(int n) {
        if(n<=1)
        return n;
      int sum1 = 0, sum2 = 0, count = 1;
        while (n != 1) {
            sum1 = sum1 + n;
            n--;
            while (sum2 <= sum1) {
                sum2 = sum2 + count;
                count++;
                if (sum2 == sum1&& n==count) {
                    return count;
                }
            }
        }
        return -1; // Return some default value if the condition is not met
    }
};
