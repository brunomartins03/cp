class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, j = 0, size = chars.size();
        while (j < size) {
            int counter = 0;
            char current = chars[j];
            while (j < size && chars[j] == current) {
                counter++; j++;
            }
            chars[i++] = current;
            if (counter > 1)
                for (auto c : to_string(counter)) chars[i++] = c;
        }
        return i;
    }
};