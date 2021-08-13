class Solution {
public:
    int HALF_INT_MIN = INT_MIN / 2;
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        if (dividend == INT_MIN && divisor == 1)
            return INT_MIN;
        
        int negative = 2;
        if (dividend > 0) {
            negative--;
            dividend = -dividend;
        }
        if (divisor > 0) {
            negative--;
            divisor = -divisor;
        }
        
        int maxbit = 0;
        while (divisor >= HALF_INT_MIN && divisor + divisor >= dividend) {
            maxbit++;
            divisor += divisor;
        }
        
        int quotient = 0;
        for (int bit = maxbit; bit >= 0; bit--) {
            if (divisor >= dividend) {
                quotient -= (1 << bit);
                dividend -= divisor;
            }
            divisor = (divisor + 1) >> 1;
        }
        
        if (negative != 1)
            quotient = -quotient;
        
        return quotient;
    }
};