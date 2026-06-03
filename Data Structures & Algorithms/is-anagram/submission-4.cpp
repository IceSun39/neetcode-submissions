class Solution {
public:
    bool isAnagram(string s, string t) {    
        std::unordered_map<char, int> seen1;
        std::unordered_map<char, int> seen2;

        for(char ch : s){
            seen1[ch]++;
        }

        for(char ch : t){
            seen2[ch]++;
        }

        return seen1 == seen2;
    }
};
