class Solution {
public:
bool isPalindrome(string s) {
	string res;
	for (int i = 0; i < s.length(); i++) {
		if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)) {
			res += tolower(s[i]);
		}
	}

	for (int i = 0, j = res.length() - 1; i < res.length() / 2; i++) {
		if (res[i] != res[j]) {
			return false;
		}
		j--;
	}
	return true;
}


};
