class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            int cnt=0;
            while(nums[i]>0)
            {
                nums[i]/=10;
                cnt++;
            }
            if(cnt%2==0)
                ans++;
        }
        return ans;      
    }
};
/*
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n,count=0;
        for(int i=0;i<nums.size();i++)
        {
            n=nums[i];
            if(( 10<=n && n<=99) || (1000<=n && n<=9999 ) || ( n==100000 ))
               count++;
        }
        return count;
    }
};
*/
