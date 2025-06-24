class Solution {
public:
    int myAtoi(string s) {
        int i = 0, size = s.size(), signal = 1;
        long total = 0;
        while (i < size && s[i] == ' ') i++;
        if (s[i] == '-') {
            i++;
            signal = -1;
        } else if (s[i] == '+') i++;
        while (i < size && isdigit(s[i])) {
            total = total * 10 + (s[i++] - '0');
            if (signal == 1 && total >= INT_MAX) return INT_MAX;
            if (signal == -1 && -total <= INT_MIN) return INT_MIN;
        }
        return signal * (int) total;
    }
};