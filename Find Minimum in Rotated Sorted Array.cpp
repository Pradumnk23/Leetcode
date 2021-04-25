class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int m = l + (r - l) / 2;
            if (nums[m] > nums.back()) l = m + 1;
            else r = m;
        }
        return nums[l];
    }
};
/*
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        sort(nums.begin(),nums.end());
        int ans=nums[0];
        return ans;
    }
};
*/
