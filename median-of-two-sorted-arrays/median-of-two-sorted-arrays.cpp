class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        vector<int> resultArray;
        for (int num : num1) {
            resultArray.push_back(num);
        }
        
        for (int num : num2)
            resultArray.push_back(num);
        
        sort(resultArray.begin(), resultArray.end());
        
        int n = resultArray.size();
        int mid = n / 2;
        
        if (n % 2 != 0)
            return (double)resultArray[mid];
        else {
            return (double)(resultArray[mid] + resultArray[mid - 1]) / 2;
        }
    }
};