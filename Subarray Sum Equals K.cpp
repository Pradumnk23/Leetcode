class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int maxm=0,sum=0;
        m[0]++;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            maxm+=m[sum-k];
            m[sum]++;
        }
        return maxm;
    }
};
