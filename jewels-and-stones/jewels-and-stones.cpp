class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelType(jewels.begin(), jewels.end());
        int res = 0;
        
        for(auto c:stones){
            if(jewelType.count(c))
                res++;
        }
            
        return res;
            
    }
};