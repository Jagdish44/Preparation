class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int maxi = 0;
        unordered_map<int, int> mp;
        while(j < nums.size()) {
            mp[nums[j]]++;
            if(mp[0] <= k) {
                maxi = max(maxi, j - i + 1);
                j++;
            } else if(mp[0] > k) {
                while(mp[0] > k) {
                    mp[nums[i]]--;
                    i++;
                }
                j++;
            }
        }
        return maxi;
    }
};