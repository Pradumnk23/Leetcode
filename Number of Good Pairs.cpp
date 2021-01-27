class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int c=0;
        unordered_map<int, int> cnt;
        for(auto a: nums)
            c += cnt[a]++;
        return c;
        
        // M-2
        /*
        int c=0;
        for(int i=0; i<nums.size();i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i]==nums[j])
                    c++;
            }
        }
        return c;   
        */
        
    }



};
