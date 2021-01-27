class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v1;
        vector<int>v2;
        vector<int>vf;
        for(int i=0; i<n; i++)
            v1.push_back(nums[i]);
        for(int i=n; i<2*n; i++)
            v2.push_back(nums[i]);
        
        for(int i=0; i<n; i++)
        {
            vf.push_back(v1[i]);
            vf.push_back(v2[i]);
        }
        return vf;
        
    }
};

/* M-2
        vector<int> out;  
        for(int x=0; x < n; x++){
            out.push_back(nums[x]);
            out.push_back(nums[n+x]);
        }
        return out;
*/
