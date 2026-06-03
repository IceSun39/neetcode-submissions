class Solution {
public:
    void reverseString(vector<char>& s) {
        int p1 = 0, p2 = s.size() - 1;

        for(int i = 0; i < s.size() / 2; i++){
            char temp = s[p1];
            s[p1] = s[p2];
            s[p2] = temp;
            p1++;
            p2--;
        }
    }
};