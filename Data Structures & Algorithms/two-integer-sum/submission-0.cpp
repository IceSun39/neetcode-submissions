class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        int diference;
        for (int i = 0; i < nums.size(); i++) {
            diference = target - nums[i];
            if (umap.find(diference) != umap.end()) {
                return {umap[diference], i};  // Повертаємо індекси
            }
            umap[nums[i]] = i;  // Зберігаємо число та його індекс
        }
        return {};  // Порожній вектор, якщо рішення немає
    }
};

