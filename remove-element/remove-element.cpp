class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == val){
                continue;
            } else {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
};