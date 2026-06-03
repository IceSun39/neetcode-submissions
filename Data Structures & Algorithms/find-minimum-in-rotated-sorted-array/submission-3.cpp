class Solution {
public:
   int findMin(vector<int>& nums) {
	int low = 0, high = nums.size() - 1;
	int mid = low + (high - low) / 2;
	int res = INT_MAX;

	while (low <= high) {
		mid = low + (high - low) / 2;
		res = min(res, nums[mid]);

		if (nums[high] > nums[low]) {
			return min(res, nums[low]);
		}

		else if (nums[mid] >= nums[low]) {
			low = mid + 1;
		}

		else {
			high = mid - 1;
		}
	}

	return min(res,nums[0]);
}

};
