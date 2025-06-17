#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVowel(char c) {
        string vowels = "aeiouAEIOU";
        return vowels.find(c) != string::npos;
    }
    string reverseVowels(string s) {
        int vsize = s.size();
        int l = 0, r = vsize - 1;
        while (l < r) {
            while (r >= 0 && !isVowel(s[r])) r--;
            while (l < vsize && !isVowel(s[l])) l++;
            if (l < r) {
                swap(s[l], s[r]);
                r--; l++;
            }
        }
        return s;
    }
};