class Solution {
public:
    int strStr(string haystack, string needle) {
        int hayLength = haystack.size();
        int needleLength = needle.size();
        
        if (needleLength == 0)
            return 0;
        
        for (int i = 0; i < hayLength - needleLength + 1; i++) {
            string needleFromHay = haystack.substr(i, needleLength);
            if (needleFromHay == needle)
                return i;
        }
        return -1;
    }
};