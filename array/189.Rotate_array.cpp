#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//        vector<int> nn = nums; 
       
//        for(int i=0; i<nums.size(); i++){
//         int turn = i+k;
//         if(turn<nums.size()){
//             nn[turn] = nums[i];
//         }
//         else{
//             int check=0;
//             nn[check++]=nums[i];
//         }
        
//        }
//        nums = nn;
//     }
// };
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> nn = nums; 
        int check=0;
        int turn = 0;
        int n = nums.size();
        k = k % n;
       for(int i=0; i<nums.size(); i++){
        turn = i+k;
        if(turn<nums.size()){
            nn[turn] = nums[i];
        }
        else{
            nn[check++]=nums[i];
        }
        
       }
       nums = nn;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    sol.rotate(nums, k); // Call the rotate function

    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

