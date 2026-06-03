class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int res = 0;
        while(l < r){
            int amount = (r - l) * min(heights[l], heights[r]);
            res = max(res, amount);
            if(heights[l] > heights[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return res;
    }
};
