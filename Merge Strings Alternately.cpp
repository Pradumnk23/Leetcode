/*string mergeAlternately(string w1, string w2) {
        int n = w1.size(), m = w2.size(), i = 0, j = 0;
        string res = "";
        while (i < n || j < m) {
            if (i < n)
                res.push_back(w1[i++]);
            if (j < m)
                res.push_back(w2[j++]);
        }
        return res;
    }
*/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        for (int i = 0; i < word1.size() || i < word2.size(); ++i) {
            if (i < word1.size())
                res.push_back(word1[i]);
            if (i < word2.size())
                res.push_back(word2[i]);
        }
        return res;
    }
};
