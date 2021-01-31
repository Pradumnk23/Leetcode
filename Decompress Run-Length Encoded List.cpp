class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size();
        vector <int> v;
        for(int i=0; i<n; i+=2)
        {
            while(nums[i]--)
                v.push_back(nums[i+1]);
        }
        return v;
    }
};

/*
vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> res;
    for (int i=0; i<nums.size(); i+=2)
        res.insert(res.end(), nums[i], nums[i+1]);
    return res;
}
*/
