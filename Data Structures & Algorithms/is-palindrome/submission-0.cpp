class Solution {
public:
    bool isPalindrome(string s) {
        string tmp = "";
        for (char c : s) {
            if (isalnum(c)) {
                tmp += tolower(c);
            }
        }

        int i = 0;
        int len = (int)tmp.length() - 1;
        while (i < len) {
            if (tmp[i] != tmp[len]) {
                return false;
            }
            i++;
            len--;
        }
        return true;
    }
};