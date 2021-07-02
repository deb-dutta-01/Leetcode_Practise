class Solution {
public:
    vector<int> twoSum(vector<int>& array, int targetSum) {
        vector<int> narr;
	for(int i=0; i<array.size()-1; i++){
		for(int j=i+1; j<array.size(); j++){
			if(array[i]+array[j] == targetSum){
				narr.push_back(i);
				narr.push_back(j);
			}
		}
	}
    return narr;
    }
};