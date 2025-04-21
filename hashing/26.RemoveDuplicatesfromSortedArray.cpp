// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         unordered_set<int> unique;
//         for (int n : nums) {
//             unique.insert(n); // Adds to set; duplicates are ignored
//         }
//         return unique.size();
//     }
// };

// int main() {
//     vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

//     Solution sol;
//     int result = sol.removeDuplicates(nums);

//     cout << "Number of unique elements: " << result << endl;

//     return 0;
// }
#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
        return 0;  // No elements to process
    }
    
    int uniqueIndex = 1;  // Index to place unique elements

    // Iterate through the array starting from the second element
    for (int i = 1; i < nums.size(); ++i) {
        // If current element is different from the previous one
        if (nums[i] != nums[i - 1]) {
            nums[uniqueIndex] = nums[i];  // Place it in the unique position
            uniqueIndex++;  // Increment the unique index
        }
    }

    // Return the new length of the array
    return uniqueIndex;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};

    int newLength = removeDuplicates(nums);

    // Output the modified array
    cout << "Modified Array: ";
    for (int i = 0; i < newLength; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}


// Correct Code Using Two-Pointer Technique:
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         if (nums.empty()) return 0;

//         int i = 0; // slow pointer

//         for (int j = 1; j < nums.size(); j++) {
//             if (nums[j] != nums[i]) {
//                 i++;
//                 nums[i] = nums[j];
//             }
//         }

//         return i + 1;
//     }
// };

