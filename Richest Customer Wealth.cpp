class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        vector<int>s;
        for(int i=0; i<accounts.size(); i++)
        {
            int sum=0;
            for(int j=0; j<accounts[i].size(); j++)
            {
               sum+=accounts[i][j]; 
            }
            s.push_back(sum);
        }
        return *max_element(s.begin(), s.end());
    }
};
