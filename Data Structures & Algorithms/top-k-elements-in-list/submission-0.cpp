class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> grouped;
        unordered_map<int, int> occurence;
        int max = 0;

        for (int i = 0; i < nums.size(); i++){
            occurence[nums[i]]++;
            int occ = occurence[nums[i]];
            if (occ > max){
                max++;
                grouped.push_back({nums[i]});
            } else {
                grouped[occ-1].push_back(nums[i]);
            }
        }

        int i = max;
        while (i != 0){
            i--;
            if (grouped[i].size() == k){
                return grouped[i];
            }
        }
        return {};

    }
};
