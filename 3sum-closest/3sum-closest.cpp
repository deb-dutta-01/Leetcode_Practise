class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closest = INT_MAX;
        int maxVal;
        for(int i = 0; i < nums.size() - 2; i++){
            int low = i + 1;
            int high = nums.size() - 1;
            while(low < high) {
                int val = nums[i] + nums[low] + nums[high];
                if(abs(target - val) < abs(closest))
                    closest = target - val;
                if(val > target)
                    high--;
                else
                    low++;
            }
        }
        
        return target - closest;
    }
};