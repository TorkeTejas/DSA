### **Pair Sum Problem**  

#### **Problem Statement:**  
Given an **sorted array of integers** and a **target sum**, find a pair of numbers in the array that add up to the target sum. Return the indices (or values) of the pair if found. If no such pair exists, return an empty result.

---

### **Example 1**
#### **Input:**
```cpp
nums = [2, 7, 11, 15];
target = 9;
```
#### **Output:**
```cpp
[0, 1]   // Because nums[0] + nums[1] = 2 + 7 = 9
```

---

### **Example 2**
#### **Input:**
```cpp
nums = [3, 2, 4];
target = 6;
```
#### **Output:**
```cpp
[1, 2]   // Because nums[1] + nums[2] = 2 + 4 = 6
```

---

## **Approaches to Solve the Problem**

### **1. Brute Force (O(n²))**
- Use two loops to check all pairs.
- **Time Complexity:** O(n²)  

#### **Code:**
```cpp
vector<int> pairSum(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};  // Return empty if no pair found
}
```

---

### **2. HashMap Approach (O(n))** ✅ (Most Efficient)
- Use a **unordered_map** (hash table) to store numbers and their indices.
- For each element, check if **target - current_number** is already in the map.
- **Time Complexity:** O(n)

#### **Code:**
```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i};
        }

        numMap[nums[i]] = i;
    }
    return {};  // Return empty vector if no pair found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = pairSum(nums, target);
    if (!result.empty()) {
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No pair found" << endl;
    }
    return 0;
}
```

---

### **3. Two Pointer Approach (O(n log n))** (If Array is Sorted)
- **Sort** the array.
- Use two pointers (`start = 0`, `end = n-1`).
- Move pointers based on the sum.
- **Time Complexity:** O(n log n) (due to sorting)

#### **Code:**
```cpp
vector<int> pairSumSorted(vector<int> nums, int target) {
    sort(nums.begin(), nums.end());  // Sorting takes O(n log n)
    
    int start = 0, end = nums.size() - 1;
    while (start < end) {
        int sum = nums[start] + nums[end];
        if (sum == target) {
            return {start, end};
        } else if (sum < target) {
            start++;
        } else {
            end--;
        }
    }
    return {};
}
```

---

### **Which Approach to Use?**
| Approach       | Time Complexity | Space Complexity | Suitable For |
|---------------|---------------|----------------|--------------|
| **Brute Force** | O(n²) | O(1) | Small input sizes |
| **HashMap** ✅ | O(n) | O(n) | Best for unsorted arrays |
| **Two Pointers** | O(n log n) | O(1) | If the array is sorted |

---
### **Follow-up Questions**
1. **What if we need all unique pairs?**  
   - Modify the HashMap/Two-pointer approach to store multiple results.
   
2. **What if the array contains duplicate elements?**  
   - Ensure the same index is not used twice.

3. **What if negative numbers are included?**  
   - Works fine in all approaches since the sum condition remains valid.

Let me know if you need further clarifications! 🚀