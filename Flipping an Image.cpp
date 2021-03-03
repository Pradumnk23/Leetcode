class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto& row : image) {
            reverse(row.begin(), row.end());
            for (auto& v : row) v ^= 1;
        }
        return image;
    }
};
// For two vector using 2 fr loop 1st to reverse and 2nd for ^=1
