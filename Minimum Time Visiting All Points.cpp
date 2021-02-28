class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int s=0;
	        for(int i=0;i<points.size()-1;i++)
	        {
		         s+=max(abs(points[i][0]-points[i+1][0]),abs(points[i][1]-points[i+1][1]));
	        }
	        return s;
    }
};

/* here points[i][0] is 1st cordinate as i=0 and 0 denotes x axis and if here's 1 then it denotes y axis */
