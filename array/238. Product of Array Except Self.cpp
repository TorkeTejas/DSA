#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1;
        int n = nums.size();
        vector<int> result;
        int zeroCount = 0;

        // First pass: calculate product of all non-zero elements & count zeros
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zeroCount++;
                if (zeroCount > 1) {
                    mul = 0;
                }
                continue;
            }
            mul *= nums[i];
        }

        // Second pass: build the result
        for (int i = 0; i < n; i++) {
            if (zeroCount == 1) {
                if (nums[i] == 0) {
                    result.push_back(mul);
                } else {
                    result.push_back(0);
                }
            } else if (zeroCount > 1) {
                result.push_back(0);
            } else {
                result.push_back(mul / nums[i]);
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    
    vector<int> result = sol.productExceptSelf(nums);

    cout << "Product Except Self: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
// mine
// class Solution {
//     public:
//         vector<int> productExceptSelf(vector<int>& nums) {
//             int mul = 1;
//             int insert;
//             int n = nums.size();
//             vector<int> nn;
//             int count =0;
//             for(int i=0; i<n; i++){
//                 if(nums[i]==0){
//                     count++;
//                     if(count>1){
//                         mul = 0;
//                     }
//                     continue;
//                 }
    
//                 mul = mul*nums[i];
//             }
    
//             for(int j=0; j<n; j++){
//                 if(count==1){
//                     if(nums[j]==0){
//                     nn.push_back(mul);
//                     }
//                     else{
//                     nn.push_back(0);
//                     }
//                 }
//                 else if(count>1){
//                     nn.push_back(0);
//                 }
        
//                 else{
//                 insert = mul/nums[j];
//                 nn.push_back(insert);
//                 }
//         }
//            nums=nn;
//            return nums; 
//         }
//     };