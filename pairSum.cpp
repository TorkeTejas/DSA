#include<vector>
#include<ostream>
#include<iostream>
using namespace std;

vector<int> pairSum(vector<int> nums,int target){
    vector<int> ans;
    int size = nums.size();
    int start = 0, end = size-1;
    // int sum = 0;

    while(start<end){
        int sum = nums[start]+nums[end];
        if(sum == target)
        {
            ans.push_back(start);
            ans.push_back(end);
            // return ans;
        }
        else if (sum < target)
        {
            start++;
        }
        else
        {
            end--;
        }
        return ans;
    }
    // return ans;

}
int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 17;

    vector<int> ans = pairSum(nums, target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;

}