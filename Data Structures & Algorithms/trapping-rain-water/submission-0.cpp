class Solution {
public:
    int trap(vector<int>& height) {
	int res = 0;
	for (int i = 1; i < height.size() - 1; i++) {
		int l = *max_element(height.begin(), height.begin() + i);
		int r = *max_element(height.begin() + i, height.end());
		int sum = min(l, r) - height[i];
		if (sum < 0) {
			continue;
		}
		else {
			res += sum;
		}
	}
	return res;
}

};
