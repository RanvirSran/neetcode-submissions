class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> choices; 

        for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        
        if (choices.find(complement) != choices.end()) {
            return {choices[complement], i};
        }
        
        choices[nums[i]] = i;
    }
    
    return {};
    }
};
