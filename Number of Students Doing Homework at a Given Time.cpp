class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        // Sort both the arrays in O(n logn)
        sort(startTime.begin(), startTime.end());
        sort(endTime.begin() ,endTime.end());
		
		// UpperBound(STL) will give the iterator pointing to first greater time than querytime
        int u = upper_bound(startTime.begin(), startTime.end(), queryTime) - startTime.begin();
		
		// LowerBound(STL) will give the iterator pointing to first NOT less than querytime.
        int l = lower_bound(endTime.begin(), endTime.end(), queryTime) - endTime.begin();
		
		// No. of instances when the study has been started before and completed after the query
		// time will be given as u - l :
        return u - l;
    }
};
/* If single Query
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int cnt=0;
        for(int i=0; i<startTime.size(); i++)
        {
            if(startTime[i]<=queryTime && endTime[i]>=queryTime)
                cnt++;   
        }
        return cnt;
    }
};
*/
