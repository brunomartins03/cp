class Solution {
public:
    int reverse(int x) {
        string strnum = to_string(x);
        auto begin = strnum[0] == '-' ? strnum.begin() + 1 : strnum.begin();
        ::reverse(begin, strnum.end());
        try {
            return stoi(strnum);
        } catch(...) {
            return 0;
        }
    }
};
