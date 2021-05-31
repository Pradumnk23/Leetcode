 string generateTheString(int n) {
        return "b" + string(n - 1, 'a' + n % 2);
    }
  /*
class Solution {
public:
    string generateTheString(int n) {
        string s="";
        if(n%2==0)
        {
            for(int i=1; i<=n-1; i++)
                s+="a";
            s+="b";
        }
        else
        {
            for(int i=1; i<=n; i++)
                s+="a";
        }
        return s;
    }
};
*/
