class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsofar = INT_MIN;
        int maxendhere = 0;
        
        for(int i=0; i<nums.size(); i++){
            maxendhere += nums[i];
            
            if(maxsofar < maxendhere)
                maxsofar = maxendhere;
            
            if(maxendhere < 0)
                maxendhere = 0;
        }
        
        return maxsofar;
    }
};