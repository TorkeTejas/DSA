// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int i=0;
//         int min = 0;
//         int profit = 0;
//         for(int j=1; j<prices.size(); j++){
//             if(prices[i]>prices[j]){
//                 i=j;
//                 min = prices[j];
//             }
//             else{
//                 min = prices[i];
//                 profit = max(profit,prices[j] - min);
//             }
//         }
//         return profit;
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> prices = {2,1,2,1,0,1,2}; // Example input
//     cout << "Maximum Profit: " << sol.maxProfit(prices) << endl;
//     return 0;
// }

//wrong ones
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int i=0;
//         int min = 0;
//         int profit = 0;
//         for(int j=1; j<prices.size(); j++){
//             if(prices[i]>prices[j]){
//                 i++;
//                 min = prices[j];
//             }
//             else{
//                 min = prices[i];
//                 profit = prices[j] - min;
//             }
//         }
//         return profit;
//     }
// };

//gpt solution

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         if (prices.empty()) return 0;
//         int minPrice = prices[0];
//         int maxProfit = 0;
        
//         for (int j = 1; j < prices.size(); j++) {
//             if (prices[j] < minPrice) {
//                 minPrice = prices[j];
//             } else {
//                 maxProfit = max(maxProfit, prices[j] - minPrice);
//             }
//         }
//         return maxProfit;
//     }
// };

//dp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;

        int hold = -prices[0]; // dp[0][1]
        int notHold = 0;       // dp[0][0]

        for (int i = 1; i < n; i++) {
            hold = max(hold, -prices[i]);                // Buying at lowest so far
            notHold = max(notHold, hold + prices[i]);    // Selling now
        }

        return notHold;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << sol.maxProfit(prices) << endl;
    return 0;
}
