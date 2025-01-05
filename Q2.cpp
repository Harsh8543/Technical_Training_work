#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> nums = {1, 2, 3, 2, 1, 4};
    vector<int> ans;
    int n = nums.size();
    int result = nums[0];
    for (int i = 1; i < n; i++) {
        result ^= nums[i];
    }
    int right_bit = result & ~(result - 1);
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] & right_bit) {
            x ^= nums[i];
        } else {
            y ^= nums[i];
        }
    }
    ans.push_back(x);
    ans.push_back(y);
    sort(ans.begin(), ans.end());
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
