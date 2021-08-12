class Solution {
public:
    int numSplits(string s) {
        int n = s.size();
        
        vector<int> prev(n), suff(n);
        map<char, int> freq;
        
        for (int i = 0; i < n; i++) {
            freq[s[i]]++;
            prev[i] = freq.size();
        }
        
        freq.clear();
        
        for (int i = n - 1; i >= 0; i--) {
            freq[s[i]]++;
            suff[i] = freq.size();
        }
        
        int result = 0;
        
        for (int i = 1; i < n; i++) {
            if (prev[i - 1] == suff[i])
                result++;
        }
        
        return result;
    }
};