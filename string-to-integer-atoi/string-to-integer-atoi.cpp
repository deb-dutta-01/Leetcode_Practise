class Solution {
public:
    //Time: O(n) -> n is length of string
    //Space: O(1)
    int myAtoi(string str) {
        long long int result = 0;
        int indicator = 1;

        int i = str.find_first_not_of(' ');
		
		//If string only contains ' ', i will be -1
        if (i == -1)
            return 0;
			
        if(str[i] == '-' || str[i] == '+')
            indicator = (str[i++] == '-') ? -1 : 1;
        
        while('0'<= str[i] && str[i] <= '9') 
        {
            result = result*10 + (str[i++] - '0');
            if(result*indicator >= INT_MAX) return INT_MAX;
            if(result*indicator <= INT_MIN) return INT_MIN;                
        }
        
        return result*indicator; 
    }
};