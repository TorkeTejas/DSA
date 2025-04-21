#include <iostream>
#include <vector>
#include <algorithm>  // for swap
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;  // pointer to place next non-zero

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    cout << "Before: ";
    for (int n : nums) {
        cout << n << " ";
    }

    Solution sol;
    sol.moveZeroes(nums);

    cout << "\nAfter:  ";
    for (int n : nums) {
        cout << n << " ";
    }

    return 0;
}


// void moveZeroes(vector<int>& nums) {
//     int lastNonZero = 0;

//     // Step 1: move all non-zero elements forward
//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] != 0) {
//             nums[lastNonZero++] = nums[i];
//         }
//     }

//     // Step 2: fill rest with 0s
//     for (int i = lastNonZero; i < nums.size(); i++) {
//         nums[i] = 0;
//     }
// }
