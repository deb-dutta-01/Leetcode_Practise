class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        // for(int i = m; i < m + n; i++) {
        //     num1[i] = num2[i-m];
        // }
        // sort(num1.begin(), num1.end());
        
        int p1 = m - 1;
        int p2 = n - 1;
        
        for(int i = m + n - 1; i >= 0; i--){
            if(p2 < 0)
                break;
            else if(p1 >= 0 && num1[p1] > num2[p2]){
                num1[i] = num1[p1];
                p1--;
            }
            else{
                num1[i] = num2[p2];
                p2--;
            }
        }
    }
};