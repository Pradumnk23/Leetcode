/*
class Solution {
public:
    int balancedStringSplit(string s) {
        int res = 0, cnt = 0;
        for (const auto& c : s) 
        {
            cnt += c == 'L' ? 1 : -1;
            if (cnt == 0) ++res;
        }
        return res;  
    }
};
*/

class Solution {
public:
    int balancedStringSplit(string s){
        int l=0,r=0,c=0;
        for(auto &str:s)
        {
            if(str=='L')
                l++;
            if(str=='R')
                r++;
            if(l==r)
                c++;
        }
        return c;
    }
        
};
