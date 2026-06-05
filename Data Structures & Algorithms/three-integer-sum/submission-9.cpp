class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> sol;
        
        for(int i = 0; i < nums.size() - 2; i++){
            if(nums[i] > 0) break;
            int i2 = i + 1, i3 = nums.size() - 1;
            while(i2 < i3){
                int sum = nums[i] + nums[i2] + nums[i3];
                if(sum == 0){
                    sol.insert({nums[i], nums[i2], nums[i3]});
                    i2++; i3--;
                } else if(sum < 0){
                    i2++;
                } else {
                    i3--;
                }
            }
        }
        return vector<vector<int>>(sol.begin(), sol.end());
    }
};