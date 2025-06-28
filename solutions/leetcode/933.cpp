class RecentCounter {
public:
    vector<int> calls;
    RecentCounter() {
        calls = {};
    }
    
    int ping(int t) {
        calls.push_back(t);
        int counter = 0, end = calls.size() - 1;
        for (int i = end; i >= 0; i--) {
            if (calls[i] < calls[end] - 3000) break;
            counter++;
        }
        return counter;
    }
};

