class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans = {first};
        for(int& a: encoded)
            ans.push_back(first ^= a);
        return ans;
    }
};
