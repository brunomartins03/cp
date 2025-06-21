class Solution {
public:
    bool isVowel(char c) {
        string vowels = "aeiou";
        return vowels.find(c) != string::npos;
    }
    int maxVowels(string s, int k) {
        int maxvowels = 0, qtd = 0;
        int i, j = 0;
        for (i = 0; i < k; i++)
            if (isVowel(s[i])) qtd++;
        maxvowels = qtd;
        while (i < s.size()) {
            if (isVowel(s[i])) qtd++;
            if (isVowel(s[j])) qtd--;
            i++; j++;
            maxvowels = max(maxvowels, qtd);
        }
        return maxvowels;
    }
};