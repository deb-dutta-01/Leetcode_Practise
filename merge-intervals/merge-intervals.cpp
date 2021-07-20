class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {return a[0] < b[0];});
        
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        
        for(int i = 1; i < intervals.size(); i++){
            int previousEnd = result.back()[1];
            int currentStart = intervals[i][0];
            int currentEnd = intervals[i][1];
            
            if(previousEnd < currentStart)
                result.push_back(intervals[i]);
            else {
                currentEnd = max(previousEnd, currentEnd);
                result.back()[1] = currentEnd;
            }
        }
        return result;
    }
};