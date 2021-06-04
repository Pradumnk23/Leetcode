class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        
        for(int i=left; i<=right; i++)
        {
            int temp=i;
            while(temp>0)
            {
                int rem=temp%10;
                if(rem==0 || i%re)
                    break;
                temp/=10;
            }
            if(temp==0)
                v.push_back(i);
        }
        return v;
    }
};
