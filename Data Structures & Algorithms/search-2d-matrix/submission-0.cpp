class Solution {
public:
   bool searchMatrix(vector<vector<int>>& matrix, int target) {
	for (int i = 0; i < matrix.size(); i++) {
		if (matrix[i][matrix[i].size() - 1] < target) continue;
		else {
			int low = 0, high = matrix[i].size() - 1;
			
			while (low <= high) {
				int mid = low + (high - low);
				if (matrix[i][mid] == target) {
					return true;
				}
				else if (matrix[i][mid] > target) {
					high = mid - 1;
				}
				else {
					low = mid + 1;
				}
			}
			return false;
		}
	}
	return false;
}



};
