/*
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int check[10000]={};
        int n=nums.size();
        vector<int>v;
        for(int i=0; i<n; i++)
           (check[nums[i]])++; 
        for(int i=1; i<=n; i++)
        {
            if (check[i]>1)
                v.push_back(i);   
        }
        for(int i=1; i<=n; i++)
        {
            if (check[i]==0)
                v.push_back(i);   
        }
        return v;
    }
};
Check why M-1 is showing run time error */
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result(2, -1); 
        for(int i=0; i<nums.size(); ++i){
            while(nums[i] != i+1){
                if(nums[i] == nums[nums[i]-1]){
                    result[0] = nums[i];
                    result[1] = i+1; 
                    break; 
                }else      
                    swap(nums[i], nums[nums[i]-1]); 
            }
        }
        return result; 
    }
};
