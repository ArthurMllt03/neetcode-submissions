class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indice;
        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if (indice.contains(diff)){
                return {indice[diff], i};
            } else {
                indice[nums[i]] = i;
            }
        }
        return {};

    }
};
