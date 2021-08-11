class Solution {
public:
    
    void letterCombinationsHelper(int idx, string digits, 
                                           vector<char> &phoneNumber, vector<string> &found) {
        if (idx == digits.size()) {
            string output = accumulate(phoneNumber.begin(), phoneNumber.end(), string{});
            found.push_back(output);
        }
        
        vector<char> character = digits_letters[digits[idx]];
        for (char inp : character) {
            phoneNumber[idx] = inp;
            letterCombinationsHelper(idx + 1, digits, phoneNumber, found);
        }
    }
    
    unordered_map<char, vector<char>> digits_letters = 
       {{'2', {'a', 'b', 'c'}},
        {'3', {'d', 'e', 'f'}},
        {'4', {'g','h', 'i'}},
        {'5', {'j', 'k', 'l'}},
        {'6', {'m', 'n', 'o'}},
        {'7', {'p', 'q', 'r', 's'}},
        {'8', {'t', 'u', 'v'}},
        {'9', {'w', 'x', 'y', 'z'}}};
    
    vector<string> letterCombinations(string digits) {
        
        if (digits.empty())
        return {};
    
        vector<char> phoneNumber(digits.size(), '0');
        vector<string> found;
        letterCombinationsHelper(0, digits, phoneNumber, found);
        return found;
    }
    
    
    
};