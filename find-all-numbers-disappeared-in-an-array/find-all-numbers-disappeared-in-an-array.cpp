class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        for (int i = 1; i <= nums.size(); i++) {
            int num = abs(nums[i - 1]) - 1;
            nums[num] = nums[num] > 0 ? -nums[num] : nums[num];
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)
                result.push_back(i+1);
        }
        return result;
    }
};