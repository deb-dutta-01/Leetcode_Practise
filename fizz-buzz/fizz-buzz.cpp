class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for (int j = 0; j < n; j++){
            int i = j + 1;
            if (i % 3 == 0 && i % 5 == 0)
                result.push_back("FizzBuzz");
            else if (i % 3 == 0)
                result.push_back("Fizz");
            else if (i % 5 == 0)
                result.push_back("Buzz");
            else
                result.push_back(to_string(i));
        }
        return result;
    }
};