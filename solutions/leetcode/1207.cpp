class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occ;
        for (const auto a : arr) occ[a]++;
        unordered_set<int> counter;
        for (const auto& [_, v] : occ) counter.insert(v);
        return counter.size() == occ.size();
    }
};