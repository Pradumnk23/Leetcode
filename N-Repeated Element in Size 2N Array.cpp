class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st;
        for(auto i:nums)
        {
            if(st.count(i))
                return i;
            st.insert(i);
        }
        return -1;
    }
};
