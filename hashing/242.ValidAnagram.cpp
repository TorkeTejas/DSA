// 200425

#include <iostream>           // for std::cout, std::endl
#include <string>             // for std::string
#include <unordered_map>      // for std::unordered_map

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        for (int i = 0; i < s.length(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }

        return countS == countT;
    }
};

// Example usage
int main() {
    Solution solution;
    string s = "listen";
    string t = "silent";

    if (solution.isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
