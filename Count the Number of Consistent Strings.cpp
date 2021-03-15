/* ---------------------- IMP ----------------------
------------ NEED TO LEARN AGAIN ---------------- */

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt = words.size();
        bool alpha[123]={};
        for(auto c:allowed) alpha[c]=true;
        for(auto w:words)
        {
            for(auto c:w)
            {
                if(!alpha[c])
                {
                    cnt--;
                    break;
                }
            }
        }
        return cnt;
        
    }
};
