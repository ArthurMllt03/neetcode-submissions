class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<vector<int>> data;

        for (int i = 0; i < nums.size(); i++){
            data.push_back({nums[i], i});
        }
        std::sort(data.begin(), data.end());
        int i = 0, j = nums.size()-1;
        int sum = data[i][0] + data[j][0];
        while ( sum != target){
            if (sum > target) {
                j--;
            } else {
                i++;
            }
            sum = data[i][0] + data[j][0];
        }
        return {std::min(data[i][1], data[j][1]), std::max(data[i][1], data[j][1])};

    }
};
