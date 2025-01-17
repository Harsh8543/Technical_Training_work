#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

class Solution {
public:
    std::vector<std::string> AllPossibleStrings(const std::string& s) {
        std::vector<std::string> ans;
        int totalSet = std::pow(2, s.length());
        for (int i = 1; i < totalSet; i++) {
            int bitOfi = i;
            int count = 0;
            std::string current = "";
            while (bitOfi != 0) {
                if ((bitOfi & 1) == 1) {
                    current += s[count];
                }
                bitOfi = bitOfi >> 1;
                count++;
            }

            ans.push_back(current);
        }
        std::sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution solution;
    std::string s = "abc";
    std::vector<std::string> result = solution.AllPossibleStrings(s);
    std::cout << "All possible non-empty subsequences:" << std::endl;
    for (const std::string& str : result) {
        std::cout << str << std::endl;
    }

    return 0;
}
