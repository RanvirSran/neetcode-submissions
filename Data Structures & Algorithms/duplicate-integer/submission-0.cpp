#include <unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int, int> hash;
        for(int i = 0; i < len; i++){
            if(!hash[nums[i]]){
                hash[nums[i]] = 1;
            } else {
                hash[nums[i]] += 1;
            }
        }
        for(auto item: hash) {
            if (item.second > 1){
                return true;
            }
         }
         return false;
    }
};