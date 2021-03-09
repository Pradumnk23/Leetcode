class Solution {
public:
    int removePalindromeSub(string s) {
        int n=s.length();
        if(s=="")
            return 0;
        for(int i=0, j=n-1;i<j; i++, j--)
        {
            if(s[i]!=s[j])
                return 2;
        }
        return 1;
    }
};
