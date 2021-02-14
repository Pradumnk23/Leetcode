class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>v1;
        for(int i=0; i<n; i++)
            v1.push_back(start+2*i);
        int ans = v1[0];
        for(int i=1; i<v1.size(); i++)
            ans ^= v1[i];
        return ans;
    }
};
/* ------ BETTER APPROACH (R-2)  ------

int xorOperation(int n, int start) {   
		int res = start;
		for (int i=1; i<n; i++){
			res = res ^ (start + 2 * i);
			}
		return res;
	}
*/
