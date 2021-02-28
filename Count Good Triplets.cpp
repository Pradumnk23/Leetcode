class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        const int n = arr.size();
        int ans = 0;
        for(int i = 0; i < n - 2; i++)
            for(int j = i+1; j < n - 1 ; j++)
                for(int k = j+1; k < n && abs(arr[i] -  arr[j]) <= a; k++)
                    if(abs(arr[j] -  arr[k]) <= b && abs(arr[i] -  arr[k]) <= c) ans++;
        return ans;        
    }
};
