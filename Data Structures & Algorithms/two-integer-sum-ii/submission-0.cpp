class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i1, i2;
        i1 = 0;
        i2 = numbers.size() - 1;
        while (true){
            if(numbers[i1]+numbers[i2] < target){
                i1++;
            } else if(numbers[i1]+numbers[i2] > target){
                i2--;
            } else{
                return {i1+1, i2+1};
            }
        }
    }
};
