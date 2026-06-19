class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        if (n1 > n2) return false;

        int alpha[26] = {0}, beta[26] = {0};
        for (char c : s1) alpha[c - 'a']++;
        int left = 0;
        for (int right = 0; right < n2; right++) {
            beta[s2[right] - 'a']++;
            if (right - left + 1 > n1) {
                beta[s2[left] - 'a']--;
                left++;
            }
            if (right - left + 1 == n1) {
                if (equal(begin(alpha), end(alpha), begin(beta))) return true;
            }
        }
        return false;
    }
};
