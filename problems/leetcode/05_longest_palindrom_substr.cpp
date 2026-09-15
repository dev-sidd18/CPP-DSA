class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();

        if (n <= 1)
            return s;

        int maxLen = 1;
        int start = 0;

        for (int k = 0; k < n; k++) {
            int left = k;
            int right = k;

            while (left >= 0 && right < n &&
                   s[left] == s[right]) {

                if (right - left + 1 > maxLen) {
                    maxLen = right - left + 1;
                    start = left;
                }

                left--;
                right++;
            }
            left = k;
            right = k + 1;

            while (left >= 0 && right < n &&
                   s[left] == s[right]) {

                if (right - left + 1 > maxLen) {
                    maxLen = right - left + 1;
                    start = left;
                }

                left--;
                right++;
            }
        }

        return s.substr(start, maxLen);
    }
};