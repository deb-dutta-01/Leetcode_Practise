class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        //int n = nums.size();
        
        while(i<j){
            int currSum = nums[i]+nums[j];
            if(currSum == target)
                return {i+1,j+1};
            else if(currSum < target)
                i++;
            else if(currSum > target)
                j--;
        }
        return {-1,-1};
    }
};