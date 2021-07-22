class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> occurence;
        for (int num : nums) {
            occurence[num] += 1;
        }
        
        for (auto i = occurence.begin(); i != occurence.end(); i++) {
            if (i->second == 1)
                return i->first;
        }
        return 1;
    }
};