class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_set<int> s;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if (s.find(candyType[i]) == s.end()) 
            {
                s.insert(candyType[i]);
                cnt++;
            }
        }
        if(n/2==cnt)
            return cnt;
        else if(n/2>cnt)
            return cnt;
        else if(n/2<cnt)
            return n/2;
        return n/2;
    }
};
