class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> h;
        for(int num:nums)
            h.insert(num);
        int res=0;
        for(int num:nums)
        {
            if(!h.count(num-1))
            {
                int curr=1, cnum=num;
                while(h.count(cnum+1))
                {
                    curr++;
                    cnum++;
                }
                res=max(res,curr);
            }
        }
        return res;
    }
};
