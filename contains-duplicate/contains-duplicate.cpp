class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> res;
        
        for(int num:nums){
            if(res.find(num) == res.end()){
                res.insert(num);
            }
            else
                return true;
        }
        
        return false;
    }
};