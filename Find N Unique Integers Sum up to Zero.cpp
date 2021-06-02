vector<int> sumZero(int n) {
        vector<int> A(n);
        for (int i = 0; i < n; ++i)
            A[i] = i * 2 - n + 1;
        return A;
    }
 */
 class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
        int s=0,num=n-1;
        if(n%2==0)
        {
            for(int i=1; i<=n/2; i++)
            {
                v.push_back(num);
                v.push_back(num*-1);
                num--;
            }
        }
        else
        {
            for(int i=1; i<=n/2; i++)
            {
                v.push_back(num);
                v.push_back(num*-1);
                num--;
            }
            v.push_back(0);
        }
        return v;
    }
};
*/
