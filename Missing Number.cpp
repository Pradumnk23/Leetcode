class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int s=(n*(n+1))/2;
        int sum=0;
        for(auto& i:nums)
            sum+=i;
        int d=s-sum;
        return d;
    }
};
/*
int missingNumber(vector<int>& nums) {
    long n = nums.size();
    return n * (n+1) / 2 - accumulate(begin(nums), end(nums), 0);
}
*/
