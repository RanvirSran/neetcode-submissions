class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;
        for(int num: s){
            if(!s.count(num-1)){
                int streak = 1;
                while(s.count(num+1)){
                    streak++;
                    num++;
                }
                longest = max(streak, longest);
            }
        }
        return longest;
    }
};
