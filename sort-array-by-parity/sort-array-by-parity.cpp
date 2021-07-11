class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result(nums.size(),0);
        int low = 0;
        int high = nums.size()-1;
        for(int num : nums) {
            if(num%2 == 0){
                result[low] = num;
                low++;
            } else {
                result[high] = num;
                high--;
            }
        }
        
        return result;
    }
};