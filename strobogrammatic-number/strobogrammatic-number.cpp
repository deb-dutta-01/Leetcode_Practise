class Solution {
public:
    bool isStrobogrammatic(string num) {
        unordered_map<char,char> temp = {{'0','0'}, {'1','1'}, {'6','9'}, {'8','8'}, {'9', '6'}};
        
        for(int i=0, j=num.length()-1; i<=j; i++,j--){
            if(temp.find(num[i]) == temp.end() || temp[num[i]] != num[j])
                return false;
        }
        return true;
    }
};