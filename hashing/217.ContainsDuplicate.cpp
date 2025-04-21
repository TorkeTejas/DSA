//190425
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int> seen;
//         for(int num : nums){
//             if(seen.count(num)){
//                 return true;
//             }
//             seen.insert(num);
//         }
//         return false;
//     }
// };
#include <iostream>         // for std::cout, std::endl
#include <vector>           // for std::vector
#include <unordered_set>    // for std::unordered_set

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};

// Example usage
int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 1}; // Example input

    if (solution.containsDuplicate(nums)) {
        cout << "Contains duplicates" << endl;
    } else {
        cout << "No duplicates" << endl;
    }

    return 0;
}
