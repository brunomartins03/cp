class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto c : s) {
            if (st.empty()) {
                st.push(c);
                continue;
            }
            auto comp = st.top();
            if (
                (comp == '(' && c == ')') ||
                (comp == '[' && c == ']') ||
                (comp == '{' && c == '}')
            ) st.pop();
            else st.push(c);
        }
        return st.empty();
    }
};

