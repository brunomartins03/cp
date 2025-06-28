class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        bool destroyed = false;
        for (auto a : asteroids) {
            destroyed = false;
            while (!s.empty() && s.top() > 0 && a < 0) {
                if (abs(s.top()) < abs(a)) s.pop();
                else if (abs(s.top()) == abs(a)) {
                    s.pop();
                    destroyed = true;
                    break;
                } else {
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) s.push(a);
        }
        int n = s.size();
        vector<int> ans (n);
        while(n--) {
            ans[n] = s.top(); s.pop();
        }
        return ans;
    }
};

