class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int m = *max_element(candies.begin(), candies.begin()+candies.size()); 
        vector<bool>v;
        for(int candy:candies)
        {
            if(candy+extraCandies>=m)
                v.push_back(true);
            else
                v.push_back(false);
        }
        return v;
    }
};
