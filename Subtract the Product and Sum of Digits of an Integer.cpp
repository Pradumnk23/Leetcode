class Solution {
public:
    int subtractProductAndSum(int n) {
        int s=0, p=1;
        int len = ceil(log10(n))+1;
        for(int i=0; i<len; i++)
        {
            s += n%10;
            p *= n%10;
            n /= 10;
            if(n==0)
                break;
        }
        return p-s;
    }
};
