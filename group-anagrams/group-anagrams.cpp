class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //Time: O(m * n * log n) where m is number od strs and n is length of longest word
        //Space: O(mn)
        unordered_map<string, vector<string>> anagrams;
        if(strs.empty()){
            return vector<vector<string>>{{""}};
        }
        
        for(auto word : strs) {
            string tempWord = word;
            sort(tempWord.begin(), tempWord.end());
            if(anagrams.find(tempWord) != anagrams.end())
                anagrams[tempWord].push_back(word);
            else
                anagrams[tempWord] = vector<string>{word};
        }
        
        vector<vector<string>> result;
        for(auto word : anagrams) {
            result.push_back(word.second);
        }
        
        return result;
    }
};