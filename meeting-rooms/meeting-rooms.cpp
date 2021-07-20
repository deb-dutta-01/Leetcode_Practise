class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {return a[0] < b[0];});
        for (int i = 1; i < intervals.size(); i++) {
            int previousEnd = intervals[i-1][1];
            int currentStart = intervals[i][0];
            int currentEnd = intervals[i][1];
            
            if(previousEnd <= currentStart)
                continue;
            else
                return false;
        }
        return true;
    }
};