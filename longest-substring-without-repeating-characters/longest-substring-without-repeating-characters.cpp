class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        vector<int> longest = {0, 1};
        int startIdx = 0;
        
        if (!s.size())
            return 0;
        
        for (int i = 0; i < s.size(); i++) {
            char character = s[i];
            if (lastSeen.find(character) != lastSeen.end())
                startIdx = max(startIdx, lastSeen[character] + 1);
            
            if (longest[1] - longest[0] < i + 1 - startIdx)
                longest = {startIdx, i + 1};
            
            lastSeen[character] = i;
        }
        
        int result = longest[1] - longest[0];
        
        return result;
    }
};