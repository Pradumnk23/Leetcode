class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int cnt=1,size=nums.size();
    int res=nums[0];
    for(int i=1; i<size; i++)
    {
        if(nums[i]==res)
            cnt++;
        else
            cnt--;
        if(cnt==0){res=nums[i];cnt=1;}
    }
    int countt=0;
    for(int i=0; i<size; i++)
    {
        if(nums[i]==res)
            countt++;
    }
    if(countt<=size/2)
        res=-1;
    return res;
    }
};
