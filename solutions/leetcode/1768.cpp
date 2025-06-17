#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, m = word1.size(), n = word2.size();
        string ans;
        while (i < m || i < n) {
            if (i < m) ans += word1[i];
            if (i < n) ans += word2[i];
            i++;
        }
        return ans;
    }
};