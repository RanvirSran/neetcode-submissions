class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> arr1(len, 1);
        int prefix = 1;

        for(int i = 1; i < len; i++){
            arr1[i] = arr1[i-1]*nums[i-1];
        }
        for(int i = len-2; i >= 0; i--){
            prefix *= nums[i + 1];
            arr1[i] *= prefix;
        }
        return arr1;
    }
};
