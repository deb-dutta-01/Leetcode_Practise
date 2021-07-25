class Solution {
public:
    char findTheDifference(string s, string t) {
        //Time: O(n + m) -> where n is number of chars in s and m is number
        // of chars in t
        //Space: O(1)
        char ch = 0;
        
        for (int i = 0; i < s.size(); i++) {
            ch ^= s[i];
        }
        
        for (int i = 0; i < t.size(); i++) {
            ch ^= t[i];
        }
        return ch;
    }
};