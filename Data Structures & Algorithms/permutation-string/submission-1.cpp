class Solution {
public:

    bool isAnagram(string s, string t) {
        
	if (s.length() != t.length()) {
		return false;
	}

	unordered_map<char, int> countS;
	unordered_map<char, int> countT;
	for (int i = 0; i < s.length(); i++) {
		countS[s[i]]++;
		countT[t[i]]++;
	}
	return countS == countT;
    }

bool checkInclusion(string s1, string s2) {
	if (s1.length() > s2.length()) return false;

	for (int l = 0; l <= s2.length() - s1.length(); l++) {
		string str = s2.substr(l, s1.length());
		if (isAnagram(s1, str)) {
			return true;
		}
	}
	return false;
}

};
