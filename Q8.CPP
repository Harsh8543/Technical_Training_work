#include <iostream>
#include <cmath> // For abs()

class Solution {
public:
    int divide(int dividend, int divisor) {
        bool isNegative = (dividend < 0) != (divisor < 0);
        long long dvd = abs((long long) dividend);
        long long dvs = abs((long long) divisor);
        long long result = 0;
        while (dvd >= dvs) {
            long long temp = dvs, multiple = 1;
            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            dvd -= temp;
            result += multiple;
        }
        return isNegative ? -(int) result : (int) result;
    }
};

int main() {
    Solution solution;
    int dividend1 = 10, divisor1 = 3;
    int dividend2 = 7, divisor2 = -3;
    std::cout << "Divide " << dividend1 << " by " << divisor1 << ": " 
              << solution.divide(dividend1, divisor1) << std::endl;

    std::cout << "Divide " << dividend2 << " by " << divisor2 << ": " 
              << solution.divide(dividend2, divisor2) << std::endl;

    return 0;
}
