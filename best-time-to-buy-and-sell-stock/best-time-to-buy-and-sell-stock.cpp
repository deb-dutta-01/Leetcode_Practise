class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPri = INT_MAX;
        int maxPri = 0;
        
        for(int i=0; i<prices.size(); i++){
            minPri = min(minPri, prices[i]);
            maxPri = max(maxPri, prices[i] - minPri);
        }
        return maxPri;
    }
};