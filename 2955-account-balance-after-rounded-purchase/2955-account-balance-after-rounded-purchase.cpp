class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int n = 100 - purchaseAmount;
        int rem = n % 10;
        if (rem <= 5)
            n = n - rem;
        else
            n = n + (10 - rem);
        return n;
    }
};
