class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int sum = 0;
        vector<int> nums2;
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
            nums2.push_back(sum);
        }
        return nums2;
    }
};
