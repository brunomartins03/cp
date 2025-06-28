class Solution {
public:
    int strStr(string haystack, string needle) {
        int hsize = haystack.size(), nsize = needle.size(), i = 0, j = 0;
        while (i < hsize) {
            if (haystack[i] == needle[j]) {
                i++; j++;
            } else {
                i = i - j + 1;
                j = 0;
            }
            if (j >= nsize) return i - j;
        }
        return -1;
    }
};

