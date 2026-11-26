class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left = {1};
        vector<int> right = {1};
        for (int i = 0; i < n-1; i++){
            left.push_back(left[i]*nums[i]);
            right.push_back(right[i]*nums[n-1-i]);
        }

        vector<int> final;
        for (int i = 0; i < n ; i++){
            final.push_back(left[i] * right[n-1 - i]);
        }
        return final;
    }
};
