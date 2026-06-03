class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
	unordered_set<int> arr(nums.begin(), nums.end());
	int curr = 1, maxRes = 0;

	for (int num : nums) {
		// Перевіряємо, чи починається нова послідовність з поточного числа
		if (arr.count(num - 1) == 0) {
			curr = 1; // Оновлюємо поточну довжину послідовності
			while (arr.count(num + curr)) {
				curr++;
			}
			maxRes = max(curr, maxRes); // Оновлюємо максимальну довжину послідовності
			curr = 0;
		}
	}

	return maxRes; // Повертаємо максимальну довжину
}

};
