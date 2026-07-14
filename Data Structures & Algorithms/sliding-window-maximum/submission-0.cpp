class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;  // stores indices
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            // Remove indices out of the current window
            if (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Remove smaller elements (they are useless)
            while (!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }

            // Add current element index
            dq.push_back(i);

            // Record the maximum for the current window
            if (i >= k - 1) {
                result.push_back(nums[dq.front()]);
            }
        }

        return result;
    }
};
