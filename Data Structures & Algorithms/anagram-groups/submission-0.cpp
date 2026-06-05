class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<array<int, 26>, vector<string>> groups;

    for (int i = 0; i < strs.size(); i++) {
        array<int, 26> count = {};  // zero-initialized
        for (char a : strs[i]) {
            count[a - 'a']++;
        }
        groups[count].push_back(strs[i]);
    }

    vector<vector<string>> sol;
    for (auto& [key, val] : groups) {
        sol.push_back(val);
    }
    return sol;
}
};
