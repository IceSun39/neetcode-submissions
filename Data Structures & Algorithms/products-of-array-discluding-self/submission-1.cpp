class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pref = 1, post = 1, size = nums.size();
        vector<int> ans(size, 1);
        
        for (int i = 0; i < size; i++) {
            ans[i] = pref;
            pref *= nums[i];
        }

        for (int i = size - 1; i >= 0; --i) {
            ans[i] *= post;
            post *= nums[i];
        }

        return ans;
    }

};
