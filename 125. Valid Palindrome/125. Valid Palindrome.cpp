/*
 * Problem: 125. Valid Palindrome
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/valid-palindrome/submissions/2160823758/
 * Language: cpp
 * Date: 2026-10-03
 */

class Solution {
public:

    bool isAlphaNumeric(char c) {
    return (c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9');
}
    bool isPalindrome(string s) {
        int st = 0;
    int end = s.length() - 1;

    while (st < end) {

        if (!isAlphaNumeric(s[st])) {
            st++;
            continue;
        }

        if (!isAlphaNumeric(s[end])) {
            end--;
            continue;
        }

        if (std::tolower((s[st])) != std::tolower((s[end]))) {
            return false;
        }

        st++;
        end--;
    }

    return true;
        
    }
};
