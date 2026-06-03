class Solution {
public:
    string encode(vector<string>& strs) {
        string ans;
        
        for (int i = 0; i < strs.size(); i++) {
            // Перетворюємо довжину на рядок і додаємо її до результату
            ans += to_string(strs[i].length()) + '#' + strs[i];
        }

        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int index = 0;

        while (index < s.length()) {
            int hashPos = s.find('#', index); // Знайти позицію '#'
            int length = stoi(s.substr(index, hashPos - index)); // Отримуємо довжину рядка
            index = hashPos + 1; // Перехід до початку рядка

            ans.push_back(s.substr(index, length)); // Додаємо рядок до відповіді
            index += length; // Оновлюємо індекс для наступного рядка
        }

        return ans;
    }
};
