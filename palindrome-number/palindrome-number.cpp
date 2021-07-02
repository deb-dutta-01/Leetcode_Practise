class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int rem = 0;
        int digit = 0;
        int actual = x;
        if(x < 0)
           return false;
        
      do {
            digit = x % 10;
            rem = rem * 10 + digit;
            x = x/10;
           // i++;
        } while(x != 0);
        
        if(rem == actual){
            return true;
        }
        else{
            return false;
        }
        
    }
};