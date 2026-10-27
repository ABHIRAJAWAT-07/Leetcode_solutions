class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> cnt;

        for (int i = 0; i + k <= n; i++) {
            set<int> window;
            for (int j = i; j < i + k; j++) {
                window.insert(nums[j]);
            }
            for (int x : window) {
                cnt[x]++;
            }
        }

        int best = -1;
        for (auto &p : cnt) {
            if (p.second == 1) {
                best = max(best, p.first);
            }
        }
        return best;
    }
};