class Solution {
public:
    vector<int> getStringFrom(string s, int left, int right) {
        while (left >= 0 && right < s.size()) {
            if (s[left] != s[right])
                break;
            left--;
            right++;
        }
        
        return {left + 1, right};
    }
    
    string longestPalindrome(string s) {
        vector<int> currentLongest = {0, 1};
        
        for (int i = 1; i < s.size(); i++) {
            vector<int> odd = getStringFrom(s, i - 1, i + 1);
            vector<int> even = getStringFrom(s, i - 1, i);
            vector<int> longest = odd[1] - odd[0] > even[1] - even[0] ? odd : even;
            currentLongest = longest[1] - longest[0] > currentLongest[1] - currentLongest[0]
                ? longest : currentLongest;
        }
        
        return s.substr(currentLongest[0], currentLongest[1] - currentLongest[0]);
    }
};